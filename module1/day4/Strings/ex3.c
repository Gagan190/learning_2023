#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(const char *timeStr)
{
    char *token;
    char *rest;
    unsigned long hours, minutes, seconds;

    // Split the time string using strtok
    token = strtok((char *)timeStr, ":");
    hours = strtoul(token, &rest, 10);

    token = strtok(NULL, ":");
    minutes = strtoul(token, &rest, 10);

    token = strtok(NULL, ":");
    seconds = strtoul(token, &rest, 10);

    // Compute the total seconds
    unsigned long totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    return totalSeconds;
}

int main()
{
    const char *timeStr = "10:12:50";
    unsigned long totalSeconds = computeTotalSeconds(timeStr);

    printf("Time: %s\n", timeStr);
    printf("Total Seconds: %lu\n", totalSeconds);

    return 0;
}
