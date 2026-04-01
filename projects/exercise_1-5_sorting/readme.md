# Exercise: Sort the Sensor Bank

## Task

Create a `SensorBank` struct containing an array of 10 `SensorReading` and a count field.

**Fill it** with 10 randomly generated readings using `RANDOM_RAW()`.

**Calibrate** all readings using your existing `calibrate_readings()`.

**Sort** by `calibrated` value ascending — implement bubble sort yourself in `sort.c / sort.h`.

**Log** the sensor name, raw, and calibrated value before and after sorting.

---

## Constraints

- Name your sensors `'A'` through `'J'` — figure out how to do this without hardcoding each one
- Pass `SensorBank *` everywhere — never copy the whole struct
- Swap must work on `SensorReading *` — think about what physically moves in memory during a swap
- No `malloc` — everything on the stack

---

## Questions to answer while coding

- What does the swap actually copy? How many bytes?
- After sorting, do the memory addresses of the structs change, or just their contents?
- What happens to the `name` field during a swap — does it move too?

