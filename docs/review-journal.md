# Review Journal

The review surface for `ember-chain-oracle-flow` is deliberately narrow: one fixture, one scoring rule, and one local check.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 147, lane `ship`
- `stress`: `nonce pressure`, score 184, lane `ship`
- `edge`: `settlement risk`, score 195, lane `ship`
- `recovery`: `proof depth`, score 176, lane `ship`
- `stale`: `event finality`, score 214, lane `ship`

## Note

The repository should be understandable without pretending it is larger than it is.
