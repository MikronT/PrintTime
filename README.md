# PrintTime

A C++ console program that prints current time right down to the millisecond for use in time-dependent Batch scripts

Version: **1.0**

---

## Usage

Just run it and it'll print **local** Windows system time in `YYYY MM DD HH mm SS sss` format

```batch
printTime
```

Sample output

```text
C:\Windows\system32>printTime
2022 02 10 11 07 28 046

C:\Windows\system32>
```

To catch the output you can use a `for` loop like that and format it to suit your needs

```batch
for /f "tokens=1,2,3,4,5,6,7 delims= " %%i in ('printTime') do (
    rem MM/DD/YYYY HH:mm:SS.sss
    echo.%%j/%%k/%%i %%l:%%m:%%n.%%o

    rem DD/MM/YYYY HH:mm:SS
    echo.%%k/%%j/%%i %%l:%%m:%%n

    rem DD.MM.YYYY HH:mm:SS.sss
    echo.%%k.%%j.%%i %%l:%%m:%%n.%%o

    rem YYYY-MM-DD-HH-mm-SS-sss
    echo.%%i-%%j-%%k-%%l-%%m-%%n-%%o

    rem DDd HHh MMm SSs
    echo.%%kd %%lh %%mm %%ns
)
```
