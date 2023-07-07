OPCODE = {
    "add": 0, "comp": 0,
    "and": 1, "xor": 1,
    "shll": 2, "shrl": 2,
    "shllv": 2, "shrlv": 2,
    "shra": 2, "shrav": 2,
    "addi": 6, "compi": 7,
    "lw": 3, "sw": 4, "diff": 5,
    "b": 8, "br": 9,
    "bltz": 10, "bz": 11,
    "bnz": 12, "bl": 13,
    "bcy": 14, "bncy": 15,
}


RFORMATS = {
    "add", "comp",
    "and", "xor", "diff",
    "shll", "shrl",
    "shllv", "shrlv",
    "shra", "shrav"}


FUNCODE = {
    "add": 0, "comp": 1,
    "and": 0, "xor": 1,
    "shll": 0, "shrl": 1,
    "shllv": 2, "shrlv": 3,
    "shra": 4, "shrav": 5,
}
