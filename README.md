# threadload
Small console application to load all cores of a CPU close to 100%

threadload starts a thread for each CPU cores then waits for an interrupt signal. This loads each core to (near) 100%. This may be useful for stress testing a system, e.g. ensuring power management, thermal management, etc. is performing as expected.

On a POSIX system threadload should build using the command:

`
make
`

Executing `threadload` should start the process. Ctrl+C should terminate it.
