/*
               init                           next
   ...........................................................
        α|            |ρ        .             fXXe
     ο - 0123456789abcdef - σ   .             dXXc
         XXXXXXXXXXXXXXXX       .           α|    |ρ
         rsp - fXXe             .   ο - 0123456789abcdef - σ
               dXXc             .       XXXXXXXXXXXXXXXX
               bXXa             .       rsp - bXXa
               9XX8             .             9XX8
               7XX6             .             7XX6
               5XX4             .             5XX4
               3XX2             .             3XX2
               1XX0             .             1XX0
                        ο <= α <= ρ <= σ
            σ[ρ+2] = არა σ[ρ+1] = და σ[ρ+0] = ან
1. პირველითგან იყო სიტყუაჲ, და სიტყუაჲ იგი იყო ღმრთისა თანა, და ღმერთი იყო
   სიტყუაჲ იგი.
2. ესე იყო პირველითგან ღმრთისა თანა.
3. ყოველივე მის მიერ შეიქმნა, და თჳნიერ მისა არცა ერთი რაჲ იქმნა, რაოდენი-რაჲ
   იქმნა.
*/
#pragma once
typedef struct p_s {
  union {
    void (*c)(struct p_s *, long, long, struct p_s *);
    void *v;
    char b;
    short w;
    int d;
    long q;
    unsigned char B;
    unsigned short W;
    unsigned int D;
    unsigned long Q;
  };
} p_t;
#define OARS p_t *ο, long α, long ρ, p_t *σ
typedef void (*n_t)(OARS);
#define N(n) void n(OARS)
#define T(n) n##ο, n##α, n##ρ, n##σ
#define R(T, n) T n = (T)ο[--α].v;
#define Rpith(n)                                                               \
  p_t *n##σ = ο[--α].v;                                                        \
  long n##ρ = n##σ[0].q
#define C(n, r) n##σ[n##ρ + r].c(ο, α, n##ρ, n##σ)
#define O ο[α - 1].c(ο, α - 1, ρ, σ)
#define A(a) ο[α++].v = (void *)a,
#define wordCountOf(T)                                                         \
  (sizeof(T) +                                                                 \
   ((sizeof(void *) - (sizeof(T) % sizeof(void *))) % sizeof(void *))) /       \
      sizeof(void *)
#define და da
#define დაა daa
#define დააა daaa
#define არადანი aradani
N(da);
N(daa);
N(daaa);
N(aradani);

#define ან an
N(an);
/*
console.log(
  Array(21).fill()
           .map((_, a) => String.fromCharCode(a+0x61))
           .map((v, i, a) => `#define A${i}(${a.slice(0,i)})
${a.slice(0,i).map(v=>`A(${v})`).join('')}`) .slice(2) .join('\n')
)
*/
#define A2(a, b) A(a) A(b)
#define A3(a, b, c) A(a) A(b) A(c)
#define A4(a, b, c, d) A(a) A(b) A(c) A(d)
#define A5(a, b, c, d, e) A(a) A(b) A(c) A(d) A(e)
#define A6(a, b, c, d, e, f) A(a) A(b) A(c) A(d) A(e) A(f)
#define A7(a, b, c, d, e, f, g) A(a) A(b) A(c) A(d) A(e) A(f) A(g)
#define A8(a, b, c, d, e, f, g, h) A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h)
#define A9(a, b, c, d, e, f, g, h, i)                                          \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i)
#define A10(a, b, c, d, e, f, g, h, i, j)                                      \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j)
#define A11(a, b, c, d, e, f, g, h, i, j, k)                                   \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k)
#define A12(a, b, c, d, e, f, g, h, i, j, k, l)                                \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l)
#define A13(a, b, c, d, e, f, g, h, i, j, k, l, m)                             \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m)
#define A14(a, b, c, d, e, f, g, h, i, j, k, l, m, n)                          \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n)
#define A15(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o)                       \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o)
#define A16(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p)                    \
  A(a)                                                                         \
  A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o) A(p)
#define A17(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q)                 \
  A(a)                                                                         \
  A(b)                                                                         \
  A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o) A(p) A(q)
#define A18(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r)              \
  A(a)                                                                         \
  A(b)                                                                         \
  A(c)                                                                         \
  A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o) A(p) A(q) A(r)
#define A19(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s)           \
  A(a)                                                                         \
  A(b)                                                                         \
  A(c)                                                                         \
  A(d)                                                                         \
  A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o) A(p) A(q) A(r) A(s)
#define A20(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t)        \
  A(a)                                                                         \
  A(b)                                                                         \
  A(c)                                                                         \
  A(d)                                                                         \
  A(e)                                                                         \
  A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o) A(p) A(q) A(r) A(s) A(t)
