typedef struct catcafe{
	char name[40];
	int rating;
	int price;
}catcafe;
void create(catcafe ** arr, int * n);
void read(catcafe ** arr, int * n);
void write(catcafe * arr, int n);
void search(catcafe * arr, int n);
