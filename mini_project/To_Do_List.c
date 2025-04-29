//code owner->Emon->Daffodil International university

#include <stdio.h>

#include <string.h>

#define MAX_TASKS 10
#define MAX_LENGTH 100

// Structure to represent a task
struct Task
{
  char description[MAX_LENGTH];
  int completed;
};

// Global variables
struct Task tasks[MAX_TASKS]; // Array to store tasks
int taskCount = 0;            // Keeps track of the number of tasks

// Function declarations
void welcomeUser();
void addTask();
void removeTask();
void viewTasks();
void markTaskCompleted();

int main()
{
  int choice;

  while (1)
  {
    printf("\nTo-Do List Menu:\n");
    printf("1. Add Task\n");
    printf("2. Remove Task\n");
    printf("3. View Tasks\n");
    printf("4. Mark Task as Completed\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      addTask();
      break;
    case 2:
      removeTask();
      break;
    case 3:
      viewTasks();
      break;
    case 4:
      markTaskCompleted();
      break;
    case 5:
      printf("Exiting...\n");
      return 0;
    default:
      printf("Invalid choice, please try again.\n");
    }
  }
}
// Function to display a welcome message to the user.
void welcomeUser()
{
    system("color 4F"); // Changing terminal color.
    printf("\n\n\n\n\n");
    printf("\t------------------------------------------------------------------------------------------------------\n\n");
    printf("\t#################################### YOUR TODO LIST APP ##############################################\n\n");
    printf("\t------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t*******************************WELCOME*******************************\n\n\n\n\n\n\n\n\n\t");
    system("pause"); // Pausing the system to allow user to read the message.

    system("cls");
    printf("\n\t\t\t\t\t\tACKNOWLEDGEMENT\n");
    printf("\t\t\t\t\t\t---------------\n");
    printf("\nWe are grateful to our respectable Teacher name, whose insightful leadership and knowledge benefited us to complete this project successfully.\nWe are thankful to him for his continuous support and presence whenever needed.\n\n");
    printf("We would also like to extend our sincere thanks to all the team members, who tirelessly & dedicatedly works for the completion of the programs.\n\n");
    printf("\t\t\t\t\t\tThank You so much!\n\n\t\t\t\t\t   ");
    system("pause");

    system("cls");
    printf("\n\t\t\t\t\t\t     TEAM MEMBERS\n");
    printf("\t\t\t\t\t\t     ------------\n");

    printf("\t\t\t\t\t  ___________________________________\n");
    printf("\t\t\t\t\t |  ID NO.            NAME           |\n");
    printf("\t\t\t\t\t |-----------------------------------|\n");
    printf("\t\t\t\t\t |  232-15-818       MD. Emon Hossain|\n");
    printf("\t\t\t\t\t |-----------------------------------|\n");
    printf("\t\t\t\t\t |  241-15-196    Tousiq imdad Mehedi|\n");
    printf("\t\t\t\t\t |-----------------------------------|\n");
    printf("\t\t\t\t\t |  241-15-860       student name    |\n");
    printf("\t\t\t\t\t |-----------------------------------|\n");
    printf("\t\t\t\t\t |  241-15-106       Sakin Bin Jabed |\n");
    printf("\t\t\t\t\t |-----------------------------------|\n");
    printf("\t\t\t\t\t |  241-15-095       NaZmus Shakib   |\n");
    printf("\t\t\t\t\t |___________________________________|\n\n");
    printf("\t\t\t\t\t   ");
    system("pause");
}

// Function to add a task
void addTask()
{
  if (taskCount >= MAX_TASKS)
  {
    printf("Task list is full! Cannot add more tasks.\n");
    return;
  }

  printf("Enter the task description: ");
  getchar(); // Clear newline from input buffer
  fgets(tasks[taskCount].description, MAX_LENGTH, stdin);
  tasks[taskCount].description[strcspn(tasks[taskCount].description, "\n")] = 0; // Remove trailing newline
  tasks[taskCount].completed = 0;                                                // Mark task as not completed
  taskCount++;

  printf("Task added successfully!\n");
}

// Function to remove a task
void removeTask()
{
  if (taskCount == 0)
  {
    printf("No tasks to remove.\n");
    return;
  }

  int taskId;
  printf("Enter the task number to remove (1-%d): ", taskCount);
  scanf("%d", &taskId);

  if (taskId < 1 || taskId > taskCount)
  {
    printf("Invalid task number.\n");
    return;
  }

  // Shift tasks to fill the gap
  for (int i = taskId - 1; i < taskCount - 1; i++)
  {
    tasks[i] = tasks[i + 1];
  }
  taskCount--;

  printf("Task removed successfully.\n");
}

// Function to view tasks
void viewTasks()
{
  if (taskCount == 0)
  {
    printf("No tasks to display.\n");
    return;
  }

  printf("\nTo-Do List:\n");
  for (int i = 0; i < taskCount; i++)
  {
    printf("%d. %s [%s]\n", i + 1, tasks[i].description, tasks[i].completed ? "Completed" : "Not Completed");
  }
}

// Function to mark a task as completed
void markTaskCompleted()
{
  if (taskCount == 0)
  {
    printf("No tasks to mark as completed.\n");
    return;
  }

  int taskId;
  printf("Enter the task number to mark as completed (1-%d): ", taskCount);
  scanf("%d", &taskId);

  if (taskId < 1 || taskId > taskCount)
  {
    printf("Invalid task number.\n");
    return;
  }

  tasks[taskId - 1].completed = 1;
  printf("Task marked as completed.\n");
}


