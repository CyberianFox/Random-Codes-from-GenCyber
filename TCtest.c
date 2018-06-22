#include <stdio.h>

int scan1();
int scan10();
int scan12();
int scan13();
int scan23();
int scan123();

	int main()
{
	int direction, location, action, intro;
	int haskey=1;
	int hasnote=1;
	int haspen=1

	printf("The Quest\n Press '1' to begin\n Press '0' to exit\n");
	printf("Enter response:");
	intro = scan10();	
	//scanf("%d", &intro);
	if(intro==1)
	{
		Deadend1:
		printf("There's a fork in the road.\n Do you, Go left(1) or Right(2)?\n");
		printf("Enter response:");
		direction = scan12();
		//scanf("%d", &direction);
		
		if(direction==1)
		{
			Deadend2:
			printf("You went left: You come to another fork in the road.\n Do you, go left(1) or right(2)?\n -Go Back(3)\n");
			printf("Enter response:");
			direction = scan123();
			//scanf("%d", &direction);
			
			if(direction==3)
			{
				goto Deadend1;
			}
			if(direction==1)
			{
				Deadend8:
				printf("You went left: The path is a Dead End.\n Go back(1).\n");
				printf("Enter response:");
				location = scan1();
				//scanf("%d", &location);
				
				if(location==1)
				{
					goto Deadend2;
				}
				else
				{
					goto Deadend8;
				}
			}
			else if(direction==2)
			{
				Deadend3:
				printf("you come to a Cave, inside is a faint light.\n Do you, go in(1) or go back(2).\n");
				printf("Enter response:");
				location = scan12();
				//scanf("%d", &location);
				
				if(location==1)
				{
					Deadend4:
					printf("You enter the cave, there are two seperate tunnels.\n Do you, go left(1) or right(2)?\n -Go Back(3)\n");
					printf("Enter response:");
					direction = scan123();
					//scanf("%d", &direction);
					
					if(direction==3)
					{
						goto Deadend3;
					}
					if(direction==1)
					{
						Deadend5:
						printf("You enter into a large room, the room seems to have been lived in.\n Do you, investigate(1) or go back(2)?\n");
						printf("Enter response:");
						action = scan12();
						//scanf("%d", &action);
						
						if(action==1)
						{
							Deadend9:
							printf("You investigate the room: You discover a small pathway, it appears big enough to crawl through.\n Do you, Crawl through(1) or continue to investigate room(2).\n");
							printf("Enter response:");
							action = scan12();
							//scanf("%d", &action);
						
							if(action==1)
							{
								Deadend10:
								printf("You crawl into a small room, in the corner: a small chest, in the other a bookshelf.\n Do you, investigate the chest(1) or the bookshelf(2)?\n -Go Back(3)");
								printf("Enter response:");
								action = scan123();
								//scanf("%d", &action);
								if(action==3)
								{
									goto Deadend9;
								}

								if(action==1)
								{
									Deadend11:
									printf("You search the chest: it's covered in dust and the wood is clearly rotten.\n Do you, Open Chest(1) or go back(2).\n");
									printf("Enter response:");
									action = scan12();
									//scanf("%d", &action);

									if(action==1)
									{
										
										printf("You try to open the chest, but it is locked.\n Do you, Unlock(1) or go back(2)\n");
										if(haskey==0)
										{
											printf("You do not have the key to unlock the chest.\n Go back(1)\n");
											printf("Enter response:");
											action = scan1();
											
											if(action==1)
											{
												goto Deadend11;
											}
										}
										else if(haskey==1)
										{
											printf("The key fits: Inside the chest is a note.\n It reads,'3467'.\n Do you, hangon to note(1) or Leave note(2)?\n");
											printf("Enter response:");
											action = scan12();
											
											if(action==1)
											{
												(hasnote=1);
												printf("You have obtained a note.\n the mysterious code intregues you. Do you, read the note outloud(1) or leave room(2)?\n");
												
											}
											else
											{
												(hasnote=0);
												printf("Are you sure?\n Grab note(1) or leave chest(2)");
											}
										}
									}
									else if(action==1)
									{
	
									}
									else
									{
									
									}
								}
								else
								{
									printf("You walk over to the bookshelf, it's over stuffed with old books.\n Three books stand out to you: a red book, a green book, and a blue book.\n");
									Deadend12:
									printf("Which do you grab first, the red book(1) the green book(2) or the blue book(3)?\n");
									printf("Enter response:");
									action = scan123();
									if(action==1)
									{
										printf("You grabbed the red book: Which book next?\n The green book(2) or blue book(3)?\n");
										printf("Enter response:");
										action = scan23();
										if(action==2)
										{
											printf("You grab the green book: You then grab the blue book.\n The pages of the first two books are blank.\n Put books back(1)\n");
											printf("Enter response:");
											action = scan1();
											if(action==1)
											{
												printf("You put the books back(1).\n");
												action = scan1();
												if(action==1)
												{
													goto Deadend12;
												}
											}
											
										}
										else
										{
											printf("You grab the blue book: You then grab the green book\n The pages of all three books are blank.\n Put book back(1).\n");
											printf("Enter response:");
											action = scan1();
											if(action==1)
											{
												printf("You put the books back(1).\n");
												action = scan1();
												if(action==1)
												{
													goto Deadend12;
												}
											}	
										}
									}
									else if(action==2)
									{
										printf("You grabbed the green book: Which book next?\n The red book(1) or the blue book(3)?\n");
										printf("Enter response:");
										action = scan13();
										if(action==1)
										{
											printf("You grab the red book: You then grab the blue book.\n The pages of the books are covered in numbers.\n");
											printf("However, in the middle of the pages are blank rectangles.\n Do you, Write on the pages(1) or put the books back(2)?\n");
											printf("Enter response:");
											action = scan12();
											if(action==1)
											{
												printf("What do you write?\n The code from the note(1) or random numbers(2)?\n");
												printf("Enter response:");
												acton = scan12();
												if(action==1)
												{
													(haspen=1);
													printf("You write the code down in each book: The room starts tremble.\n Suddenly, the bookshelf slides over to reveal a secret passage.\n");
													printf("Do you, enter the passage way(1) or run from the room(2)?\n");
													
												}
											}
										}
											
									}
									else
									{
										
									}
								}
							}
							else if(action==2)
							{

							}
							else
							{
								goto Deadend9;
							}
						}
						else if(action==2)
						{
							goto Deadend4;
						}	
						else
						{
							goto Deadend5;
						}	
					}
					else if(direction==2)
					{
						Deadend6:
						printf("You come across a skeleton, it appears to be human.\n Do  you, continue on(1) or go back(2)?\n");
						printf("Enter response:");
						action = scan12();
						//scanf("%d", &action);
						
						if(action==1)
						{
							printf("You continue on:");
						}
						else if(action==2)
						{
							goto Deadend5;
						}
						else
						{
							goto Deadend6;
						}
					}
					else
					{
						goto Deadend4;
					}

				}
				else if(location==2)
				{
					goto Deadend2;
				}
			}
		}
			else
			{
				Deadend7:
				printf("You went right: A large clif stands in your way.\n Go back(1)\n");
				printf("Enter response:");
				location = scan1();
				//scanf("%d", &location);
				
				if(location==1)
				{
					goto Deadend1;
				}
			}
	}
	else if(intro==0)
	{
		printf("Goodbye.\n");
	}
}
int scan1()
{
 	int x;
 	scanf("%d", &x);
	if(x==1)
	{
	return x;
	}
	else
	{
	 x = scan1();
	}
}
	int scan10()
	{
	 	int x;
	 	scanf("%d", &x);
		if(x==1 || x==0)
		{
		return x;
		}
		else
		{
		 x = scan10();
		}
	}
	int scan12()
	{
	 	int x;
	 	scanf("%d", &x);
		if(x==1 || x==2)
		{
		return x;
		}
		else
		{
		 x = scan12();
		}
	}
	int scan13()
	{
	 	int x;
	 	scanf("%d", &x);
		if(x==1 || x==3)
		{
		return x;
		}
		else
		{
		 x = scan13();
		}
	}
	int scan23()
	{
	 	int x;
	 	scanf("%d", &x);
		if(x==2 || x==3)
		{
		return x;
		}
		else
		{
		 x = scan23();
		}
	}
	int scan123()
	{
	 	int x;
	 	scanf("%d", &x);
		if(x==1 || x==2 || x==3)
		{
		return x;
		}
		else
		{
		 x = scan123();
		}
	}
