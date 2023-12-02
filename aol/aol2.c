#include <stdio.h>
#include <string.h>


typedef struct {
    char location1[50];
    char location2[50];
    int price;
    int rooms;
    int bathrooms;
    int carParks;
    char type[50];
    char furnish[50];
} Property;


void display(){
    Property properties;
    FILE *file;
    file = fopen("file.csv", "r");

    int row;

    if (file == NULL)
    {
        printf("file error\n");
        return;
    }

    printf("Number of rows : ");
    scanf("%d", &row);
    printf("%-30s%-15s%-10s%-6s%-6s%-6s%-15s%-15s\n", "Location 1", "Location 2", "Price", "Rooms", "Bath", "CP", "Type", "Furnish");
    while (fread(&properties, sizeof(Property),1,file))
    {
       
           printf("%-30s%-15s%-10d%-6d%-6d%-6d%-15s%-15s\n", properties.location1, properties.location2, properties.price, properties.rooms, properties.bathrooms,
        properties.carParks, properties.type, properties.furnish);
        
        
    }

    fclose(file);    


}


void search(){
    Property properties;
    FILE *file;
    file = fopen("file.csv", "r");

    int row;

    if (file == NULL)
    {
        printf("file error\n");
        return;
    }

     int choice;
    char searchTerm[60];

    printf("Choose column to search:\n");
    printf("1. Location 1\n");
    printf("2. Location 2\n");
    printf("3. Type\n");
    printf("4. Furnish\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("Invalid choice. Please enter a number between 1 and 4.\n");
        fclose(file);
        return;
    }

    printf("Enter the data you want to find: ");
    scanf("%s", searchTerm);

    printf("%-30s%-15s%-10s%-6s%-6s%-6s%-15s%-15s\n", "Location 1", "Location 2", "Price", "Rooms", "Bath", "CP", "Type", "Furnish");
    printf("%-30s%-15s%-10d%-6d%-6d%-6d%-15s%-15s\n", properties.location1, properties.location2, properties.price, properties.rooms, properties.bathrooms,
    properties.carParks, properties.type, properties.furnish);

    int found = 0;

    while (fscanf(file, "%s%s%d%d%d%d%s%s", properties.location1, properties.location2, &properties.price, &properties.rooms, &properties.bathrooms, &properties.carParks, properties.type, properties.furnish) != EOF) {
        char *searchField;

        switch (choice) {
            case 1:
                searchField = properties.location1;
                break;
            case 2:
                searchField = properties.location2;
                break;
            case 3:
                searchField = properties.type;
                break;
            case 4:
                searchField = properties.furnish;
                break;
            default:
                searchField = NULL;
                break;
        }

        if (searchField != NULL && strstr(searchField, searchTerm)) {
            printf("%-30s%-15s%-10s%-6s%-6s%-6s%-15s%-15s\n", "Location 1", "Location 2", "Price", "Rooms", "Bath", "CP", "Type", "Furnish");
            printf("%-30s%-15s%-10d%-6d%-6d%-6d%-15s%-15s\n", properties.location1, properties.location2, properties.price, properties.rooms, properties.bathrooms,
            properties.carParks, properties.type, properties.furnish);

            found = 1;
        }
    }

    fclose(file);

    if (!found) {
        printf("Data not found.\n");
    }
}

void sort(){

    Property data[1200];
    FILE *file;
    file = fopen("file.csv", "r");
    
    if (file == NULL)
    {
        printf("file error\n");
        return;
    }

     int sortColumn, sortOrder;
              

                
                printf("Choose column to sort by:\n");
                printf("1. Price\n");
                printf("2. Rooms\n");
                printf("3. Bathrooms\n");
                printf("4. Car Parks\n");
                printf("Enter your choice: ");
                scanf("%d", &sortColumn);

                printf("Choose sorting order:\n");
                printf("1. Ascending\n");
                printf("2. Descending\n");
                printf("Enter your choice: ");
                scanf("%d", &sortOrder);


                 int n = 0;

    while (fscanf(file, "%s%s%d%d%d%d%s%s", data[n].location1, data[n].location2, &data[n].price, &data[n].rooms, &data[n].bathrooms, &data[n].carParks, data[n].type, data[n].furnish) != EOF) {
        n++;
        if (n >= 1000) {
            printf("Too many rows\n");
            break;
        }
    }

}
void export(){
    Property data[1200];
    FILE *file;
    file = fopen("file.csv", "r");
    
    if (file == NULL)
    {
        printf("file error\n");
        return;
    }
}
void ext(){
    printf("You are exited");
}



int main(int argc, char const *argv[])
{
    
    FILE *file;
    file = fopen("file.csv", "r");
    if (file == NULL)
    {
        printf("file error\n");
        
    }
    
    int choice;
    do
    {
        printf("What Do you want to do?\n");
        printf("1. Display data\n");
        printf("2. searh data\n");
        printf("3. sort data\n");
        printf("4. export data\n");
        printf("5. exit\n");
        printf("Your choice : \n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
        
            search();
            break;
                    case 3:
            sort();
            break;
                    case 4:
                  
            display();
            break;
                    case 5:
            ext();     
            break;
        }
        
    } while (choice != 0);
    
    return 0;
}

