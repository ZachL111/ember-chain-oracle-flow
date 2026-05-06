# ember-chain-oracle-flow

`ember-chain-oracle-flow` keeps a focused C implementation around blockchain tooling. The project goal is to implement a C blockchain tooling project for oracle constraint solving, using bounded scenario files and conflict explanations.

## Use Case

The point is to make a small domain rule concrete enough that a reader can change it and immediately see what broke.

## Ember Chain Oracle Flow Review Notes

The first comparison I would make is `event finality` against `event finality` because it shows where the rule is most opinionated.

## Highlights

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/ember-chain-oracle-walkthrough.md` walks through the case spread.
- The C code includes a review path for `event finality` and `event finality`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Code Layout

The core code exposes a scoring path and the added review layer uses `signal`, `slack`, `drag`, and `confidence`. The domain terms are `event finality`, `nonce pressure`, `settlement risk`, and `proof depth`.

The C addition stays small enough to inspect in one sitting.

## Run The Check

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Regression Path

The check exercises the source code and the review fixture. `stale` is the high score at 214; `baseline` is the low score at 147.

## Future Work

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.
