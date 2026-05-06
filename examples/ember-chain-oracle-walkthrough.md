# Ember Chain Oracle Flow Walkthrough

This note is the quickest way to read the extra review model in `ember-chain-oracle-flow`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 147 | ship |
| stress | nonce pressure | 184 | ship |
| edge | settlement risk | 195 | ship |
| recovery | proof depth | 176 | ship |
| stale | event finality | 214 | ship |

Start with `stale` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around nonce pressure and proof depth.
