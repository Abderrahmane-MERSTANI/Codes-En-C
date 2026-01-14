REBOL []

INF: 1000000
N: 5

graph: [
    [0 4 0 0 2]
    [4 0 3 0 0]
    [0 3 0 5 0]
    [0 0 5 0 1]
    [2 0 0 1 0]
]

dist: copy [INF INF INF INF INF]
visited: copy [false false false false false]

dist/1: 0  ; sommet source (index 1)

repeat step N - 1 [
    min: INF
    u: none

    repeat i N [
        if all [
            not visited/:i
            dist/:i < min
        ][
            min: dist/:i
            u: i
        ]
    ]

    if none? u [break]
    visited/:u: true

    repeat v N [
        if all [
            not visited/:v
            graph/:u/:v <> 0
            dist/:u + graph/:u/:v < dist/:v
        ][
            dist/:v: dist/:u + graph/:u/:v
        ]
    ]
]

print dist
