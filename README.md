# Lab Track - OOP Lab in C++

<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=26&pause=900&color=0A66C2&center=true&vCenter=true&width=900&lines=Object-Oriented+Programming+Lab+(C%2B%2B);Lab+Track+Submission+and+Evaluation+Portal;Clean+Code+%7C+OOP+Concepts+%7C+Practical+Tasks" alt="Typing Animation" />

![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Branch](https://img.shields.io/badge/Branches-master%20%7C%20LAB3-1f883d?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Active-0a66c2?style=for-the-badge)

</div>

---

## LabTrack Portal

<div align="center">
  <img src="labtrack.jpeg" alt="LabTrack Logo" width="220" />
</div>

- Portal: [https://labtrack025.vercel.app/login](https://labtrack025.vercel.app/login)
- Purpose: Students upload tasks, instructor evaluates submissions.

---

## Table of Contents

- [Overview](#overview)
- [Learning Goals](#learning-goals)
- [Repository Structure](#repository-structure)
- [Branch Overview](#branch-overview)
- [Build and Run](#build-and-run)
- [OOP Coverage](#oop-coverage)
- [Author Notes](#author-notes)

---

## Overview

This repository contains practical OOP lab work in C++ and supports the LabTrack workflow for assignment submission and evaluation.

<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=soft&height=90&text=Practice%20%7C%20Implement%20%7C%20Evaluate&fontSize=28&color=0:9be15d,100:00e3ae&fontColor=0b132b" alt="Divider" />
</div>

## Learning Goals

- Apply classes and objects in real exercises.
- Practice constructors, copy constructors, and destructors.
- Understand encapsulation and method design.
- Implement operator overloading and method chaining.
- Build confidence with input/output and test runs.

## Repository Structure

```text
LAB-CODE/
|-- classcode.cpp
|-- labtrack.jpeg
|-- .gitignore
```

## Branch Overview

| Branch | Focus | Main Files |
|---|---|---|
| `master` | Person class fundamentals | `classcode.cpp` |
| `LAB3` | Chaining, operator overloading, member behavior demos | `atmexample.cpp`, `operatoroverload.cpp`, `datamemberofclass.cpp` |

## Build and Run

Use any C++ compiler (GCC/MinGW recommended).

```bash
g++ classcode.cpp -o classcode
./classcode
```

If you want to run LAB3 files:

```bash
git checkout LAB3
g++ atmexample.cpp -o atmexample && ./atmexample
g++ operatoroverload.cpp -o operatoroverload && ./operatoroverload
g++ datamemberofclass.cpp -o datamemberofclass && ./datamemberofclass
```

## OOP Coverage

| Topic | Status |
|---|---|
| Classes and Objects | Complete |
| Constructors / Destructor | Complete |
| Copy Constructor | Complete |
| Function Chaining | Complete |
| Operator Overloading | Complete |

## Author Notes

- This lab is maintained for OOP practice and assessment workflow.
- Keep executable files untracked (`*.exe`) as defined in `.gitignore`.
- Keep media assets tracked if used by documentation or app branding.

---

<div align="center">
  <sub>LabTrack • OOP in C++ • Academic Lab Repository</sub>
</div>
