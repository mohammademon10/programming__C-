#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Song
{
    char name[50];
    char duration[10];
    struct Song *next;
} Song;

void addSong(Song **head, char *name, char *duration)
{
    Song *newSong = (Song *)malloc(sizeof(Song));
    strcpy(newSong->name, name);
    strcpy(newSong->duration, duration);
    newSong->next = *head;
    *head = newSong; // Adding to the beginning for simplicity
}

void printPlaylist(Song *head)
{
    Song *current = head;
    while (current != NULL)
    {
        printf("Song: %s, Duration: %s\n", current->name, current->duration);
        current = current->next;
    }
}

int main()
{
    Song *head = NULL;
    char name[50], duration[10];
    int numSongs;

    printf("Enter the number of songs: ");
    scanf("%d", &numSongs);
    getchar(); // Consume the newline character left by scanf.

    for (int i = 0; i < numSongs; i++)
    {
        printf("Enter song name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0; // Remove trailing newline from fgets
        printf("Enter song duration (e.g., 3:00): ");
        fgets(duration, sizeof(duration), stdin);
        duration[strcspn(duration, "\n")] = 0; // Remove trailing newline
        addSong(&head, name, duration);
    }

    printf("\nPlaylist:\n");
    printPlaylist(head);

    // Free the allocated memory (important!). This is omitted here for brevity.

    return 0;
}
