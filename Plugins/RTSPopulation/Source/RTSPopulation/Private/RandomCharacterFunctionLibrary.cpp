// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomCharacterFunctionLibrary.h"

FString URandomCharacterFunctionLibrary::LastName()
{
	int32 Index = FMath::RandRange(0, LastNames.Num()-1);
	return LastNames[Index];
}

FString URandomCharacterFunctionLibrary::FirstName(TEnumAsByte<EESex> ESex)
{
	if (ESex == EESex::Male)
	{
		int32 Index = FMath::RandRange(0, MaleNames.Num()-1);
		return MaleNames[Index];
	}
	else {
		int32 Index = FMath::RandRange(0, FemaleNames.Num()-1);
		return FemaleNames[Index];
	}
}

TEnumAsByte<EESex> URandomCharacterFunctionLibrary::Sex(float MaleProbability)
{
	MaleProbability = FMath::Clamp(MaleProbability, 0.0f, 1.0f);
	TArray<TEnumAsByte<EESex>> SexGroup;

	/* Fill */
	for (int32 i = 0; i < MaleProbability * 100; ++i)
	{
		SexGroup.Add(EESex::Male);
	}
	for (int32 i = SexGroup.Num(); i < 100; ++i)
	{
		SexGroup.Add(EESex::Female);
	}

	/* Shuffle */
	const int32 NumShuffles = SexGroup.Num() - 1;
	for (int32 i = 0; i < NumShuffles; ++i)
	{
		int32 SwapIdx = FMath::RandRange(i, NumShuffles);
		SexGroup.Swap(i, SwapIdx);
	}

	/* Return random ESex */
	int32 RandIdx = FMath::RandRange(0, 99);
	return SexGroup[RandIdx];
}

const TArray<FString> URandomCharacterFunctionLibrary::MaleNames
{
	"Abel", "Abraham", "Al", "Alberto", "Alejandro", "Alfonso", "Allen",
"Alton", "Alvin", "Andre", "Andres", "Andrew", "Andy", "Angel",
"Angelo", "Anthony", "Antonio", "Archie", "Ben", "Benjamin", "Bennie",
"Benny", "Bernard", "Bill", "Billy", "Blake", "Bob", "Bradford",
"Bradley", "Brandon", "Brendan", "Brent", "Brett", "Brian", "Bruce",
"Bryant", "Cameron", "Carl", "Cecil", "Cesar", "Chad", "Charles",
"Charlie", "Chris", "Christian", "Clarence", "Clark", "Clayton", "Clifford",
"Clint", "Clyde", "Conrad", "Courtney", "Craig", "Dale", "Dallas",
"Dan", "Dana", "Daniel", "Danny", "Darin", "Darnell", "Darrel",
"Darrell", "Darrin", "Daryl", "Dave", "David", "Dennis", "Derek",
"Derrick", "Dewey", "Domingo", "Dominic", "Dominick", "Don", "Donald",
"Donnie", "Doug", "Dustin", "Dwayne", "Dwight", "Eddie", "Edgar",
"Edmond", "Edmund", "Eduardo", "Edward", "Edwin", "Elbert", "Elias",
"Ellis", "Elmer", "Emilio", "Emmett", "Erick", "Erik", "Ernest",
"Ernesto", "Ervin", "Eugene", "Everett", "Felipe", "Felix", "Francisco",
"Frank", "Franklin", "Fred", "Freddie", "Fredrick", "Garry", "Geoffrey",
"George", "Gerard", "Gerardo", "Glen", "Glenn", "Gordon", "Grady",
"Grant", "Gregory", "Guadalupe", "Guillermo", "Harold", "Harvey", "Henry",
"Herman", "Homer", "Hubert", "Hugh", "Hugo", "Ignacio", "Ira",
"Irvin", "Ismael", "Israel", "Ivan", "Jack", "Jacob", "Jaime",
"Jake", "James", "Jamie", "Jan", "Jared", "Javier", "Jay",
"Jeffery", "Jerald", "Jeremiah", "Jermaine", "Jerome", "Jerry", "Jesse",
"Jessie", "Jim", "Jimmy", "Joe", "Joey", "Johnnie", "Johnny",
"Jon", "Jonathan", "Jonathon", "Jordan", "Jose", "Joshua", "Julian",
"Julio", "Julius", "Justin", "Karl", "Keith", "Kelvin", "Ken",
"Kenneth", "Kent", "Kerry", "Kevin", "Kim", "Kurt", "Kyle",
"Lamar", "Lance", "Laurence", "Lawrence", "Lee", "Leland", "Leon",
"Leonard", "Leroy", "Leslie", "Lewis", "Lloyd", "Lonnie", "Loren",
"Lorenzo", "Louis", "Lucas", "Luke", "Mack", "Malcolm", "Mario",
"Marion", "Mark", "Marlon", "Martin", "Marty", "Marvin", "Matt",
"Matthew", "Max", "Melvin", "Michael", "Micheal", "Miguel", "Mitchell",
"Morris", "Moses", "Nathaniel", "Neal", "Nicholas", "Noah", "Noel",
"Norman", "Oliver", "Omar", "Orlando", "Otis", "Owen", "Pablo",
"Pat", "Pedro", "Percy", "Perry", "Pete", "Peter", "Preston",
"Rafael", "Ralph", "Ramiro", "Ramon", "Randal", "Randall", "Randolph",
"Randy", "Raul", "Ray", "Raymond", "Reginald", "Rex", "Ricardo",
"Richard", "Rick", "Rickey", "Ricky", "Robert", "Roberto", "Roderick",
"Rodolfo", "Rogelio", "Roland", "Rolando", "Roman", "Ron", "Ronald",
"Ronnie", "Roosevelt", "Rudolph", "Rudy", "Rufus", "Russell", "Sammy",
"Santiago", "Santos", "Saul", "Scott", "Seth", "Shannon", "Shawn",
"Sheldon", "Sherman", "Simon", "Spencer", "Stanley", "Steven", "Stewart",
"Stuart", "Sylvester", "Taylor", "Terence", "Terrence", "Thomas", "Timmy",
"Timothy", "Toby", "Tomas", "Tommie", "Tracy", "Trevor", "Troy",
"Tyrone", "Victor", "Virgil", "Wade", "Walter", "Warren", "Wayne",
"Wendell", "Wesley", "Wilbert", "Wilbur", "Willard", "Willie", "Willis",
"Wilson", "Woodrow"
};

const TArray<FString> URandomCharacterFunctionLibrary::FemaleNames
{
	"Alberta", "Alexis", "Alice", "Alison", "Alma", "Alyssa", "Amelia",
"Ana", "Andrea", "Angela", "Ann", "Anne", "Annette", "Annie",
"Antoinette", "Antonia", "Arlene", "Ashley", "Audrey", "Barbara", "Becky",
"Belinda", "Bernadette", "Bernice", "Bertha", "Bessie", "Bethany", "Betsy",
"Beverly", "Blanca", "Bobbie", "Brandi", "Brenda", "Carla", "Carmen",
"Carole", "Caroline", "Carolyn", "Casey", "Cassandra", "Catherine", "Cathy",
"Cecelia", "Cecilia", "Charlotte", "Cheryl", "Christina", "Christine", "Christy",
"Cindy", "Clara", "Claudia", "Colleen", "Constance", "Courtney", "Cristina",
"Crystal", "Cynthia", "Daisy", "Danielle", "Dawn", "Deanna", "Debbie",
"Deborah", "Debra", "Delia", "Della", "Delores", "Denise", "Desiree",
"Diane", "Dianna", "Dixie", "Dolores", "Donna", "Dora", "Dorothy",
"Edith", "Edna", "Elaine", "Elena", "Elisa", "Elizabeth", "Elsa",
"Emma", "Erica", "Erin", "Essie", "Estelle", "Ethel", "Eunice",
"Eva", "Evelyn", "Faith", "Fannie", "Faye", "Florence", "Francis",
"Freda", "Gail", "Gayle", "Geneva", "Genevieve", "Geraldine", "Gertrude",
"Gina", "Gladys", "Glenda", "Gloria", "Grace", "Gwendolyn", "Hannah",
"Harriet", "Hattie", "Hazel", "Heather", "Heidi", "Helen", "Henrietta",
"Hilda", "Hope", "Ida", "Jackie", "Jacqueline", "Jacquelyn", "Jaime",
"Jamie", "Jana", "Jane", "Janet", "Janice", "Janie", "Jean",
"Jeanette", "Jeannette", "Jennie", "Jessie", "Jill", "Jo", "Joan",
"Joanna", "Jody", "Joyce", "Juana", "Judith", "Judy", "Julie",
"June", "Karen", "Karla", "Katherine", "Kathleen", "Kathryn", "Kathy",
"Katie", "Kay", "Kayla", "Kellie", "Kelly", "Kim", "Kristi",
"Kristie", "Kristin", "Krystal", "Lana", "Laura", "Lauren", "Laurie",
"Leah", "Lela", "Lena", "Lila", "Lindsay", "Lisa", "Lois",
"Lola", "Lora", "Lorena", "Lori", "Lorraine", "Lucia", "Lucille",
"Lula", "Luz", "Lydia", "Lynette", "Lynne", "Mabel", "Mable",
"Madeline", "Mamie", "Mandy", "Marcella", "Marcia", "Margarita", "Margie",
"Marguerite", "Maria", "Marian", "Marianne", "Marilyn", "Marion", "Marjorie",
"Martha", "Maryann", "Mattie", "Maureen", "Maxine", "Meghan", "Melba",
"Melissa", "Melody", "Meredith", "Michele", "Michelle", "Mildred", "Mindy",
"Misty", "Mona", "Monique", "Muriel", "Myra", "Myrtle", "Nadine",
"Natalie", "Natasha", "Nellie", "Nichole", "Nora", "Olive", "Olivia",
"Opal", "Ora", "Pam", "Patricia", "Patsy", "Patti", "Patty",
"Peggy", "Penny", "Phyllis", "Rachael", "Rachel", "Ramona", "Raquel",
"Rebecca", "Renee", "Rhonda", "Rita", "Robyn", "Rochelle", "Rosa",
"Rosalie", "Rose", "Rosemarie", "Rosemary", "Rosie", "Roxanne", "Ruth",
"Sadie", "Sally", "Sandra", "Sandy", "Sara", "Sarah", "Shari",
"Sheila", "Shelia", "Sheri", "Sherri", "Shirley", "Silvia", "Sonja",
"Sophie", "Stacey", "Stacy", "Stephanie", "Sue", "Susie", "Sylvia",
"Tamara", "Tami", "Tanya", "Tara", "Teresa", "Teri", "Terri",
"Theresa", "Tiffany", "Tina", "Toni", "Traci", "Tracy", "Vanessa",
"Vera", "Vicky", "Virginia", "Wanda", "Wilma", "Winifred", "Yolanda",
"Yvonne"
};

const TArray<FString> URandomCharacterFunctionLibrary::LastNames
{
	"Abbott", "Abernathy", "Abshire", "Anderson", "Ankunding", "Auer", "Balistreri",
"Bartell", "Bartoletti", "Barton", "Bashirian", "Batz", "Bauch", "Bayer",
"Beahan", "Beahan-Grimes", "Beatty", "Bechtelar", "Becker", "Bednar", "Beer",
"Beier", "Bernhard", "Bernier", "Bins-Barton", "Blanda", "Blick", "Block-Littel",
"Bogisich", "Bosco", "Botsford", "Boyer", "Brakus", "Brekke", "Brown",
"Christiansen", "Cole", "Collier", "Connelly", "Conroy", "Corkery", "Corkery-Adams",
"Cormier", "Corwin", "Crist", "Cronin", "Crooks", "Cruickshank", "Cummings",
"D'Amore", "Daniel", "Dare", "Davis", "Deckow", "Denesik", "Denesik-Bahringer",
"Dibbert", "Dickinson", "Dietrich", "Donnelly", "Dooley", "Douglas", "Douglas-Barton",
"DuBuque-Kunze", "Durgan", "Effertz", "Emard", "Emmerich", "Ernser", "Fadel",
"Fahey", "Farrell", "Feest", "Feest-Wilderman", "Feil", "Fisher", "Frami",
"Franecki", "Franey", "Friesen", "Fritsch", "Gerhold", "Gibson", "Gleason",
"Gleichner", "Glover", "Goodwin-Jast", "Gorczany", "Gottlieb", "Grady", "Grant",
"Grimes", "Gusikowski", "Haag", "Halvorson", "Halvorson-Dare", "Hamill", "Hammes",
"Hand", "Hane", "Hansen", "Hartmann", "Hauck", "Hayes", "Heathcote",
"Heathcote-Mohr", "Hegmann", "Heller", "Herman", "Hermann", "Hermiston", "Hettinger",
"Hintz", "Hoeger", "Hoppe", "Howe", "Hudson", "Huel", "Huels",
"Hyatt", "Jacobs", "Jacobson", "Jakubowski", "Jaskolski", "Jaskolski-Schamberger", "Jast",
"Jerde", "Johns", "Johnson", "Johnston", "Jones", "Kassulke", "Kautzer",
"Keebler", "Kemmer", "Kerluke", "Kertzmann", "Kiehn", "Kihn", "Kihn-Farrell",
"Kilback", "Kilback-Bergnaum", "Klein", "Klein-Sipes", "Kling", "Klocko", "Koch",
"Koelpin-Zieme", "Koss", "Koss-Ondricka", "Kovacek", "Kozey", "Krajcik", "Kreiger",
"Kshlerin", "Kub", "Kuhlman", "Kuhn-Kassulke", "Kulas", "Kunde", "Kunze",
"Kuphal", "Kutch", "Kuvalis", "Labadie", "Lang", "Langworth", "Larson",
"Ledner", "Legros", "Lehner", "Lesch", "Leuschke", "Lind", "Lindgren",
"Littel", "Little", "Lockman", "Lowe", "Lueilwitz", "Luettgen", "Lynch",
"MacGyver", "Macejkovic", "Maggio", "Mann", "Mante", "Marks", "Marvin",
"Mayert", "Mayert-Kassulke", "McClure", "McClure-Oberbrunner", "McLaughlin", "Metz", "Miller",
"Moen", "Mohr", "Monahan", "Morar", "Morissette-Ernser", "Mraz", "Mueller",
"Murazik", "Murphy", "Murray", "Murray-Dickinson", "Murray-Nienow", "Nader", "Nicolas",
"Nienow", "Nikolaus", "Nitzsche", "Nolan", "Nolan-Rogahn", "O'Connell", "O'Hara",
"O'Keefe", "O'Reilly", "Okuneva", "Olson", "Ondricka", "Orn", "Pacocha",
"Padberg-Weissnat", "Pagac", "Pagac-Nikolaus", "Pfannerstill", "Pollich-Kris", "Powlowski", "Predovic",
"Prohaska", "Prosacco", "Prosacco-Stokes", "Purdy", "Quitzon", "Quitzon-Wolf", "Rath",
"Ratke-Johnson", "Rau", "Reilly", "Reinger", "Renner", "Reynolds", "Rippin",
"Ritchie", "Robel", "Roberts", "Rodriguez", "Romaguera", "Roob", "Rosenbaum",
"Rowe", "Ruecker", "Runolfsdottir", "Runolfsson", "Runte", "Russel", "Rutherford",
"Ryan", "Sanford", "Satterfield", "Sauer", "Schaden", "Schamberger", "Schinner",
"Schmeler", "Schneider", "Schneider-Sauer", "Schoen", "Schowalter", "Schroeder", "Schulist",
"Schultz", "Schumm", "Schuppe", "Senger", "Shanahan", "Shields", "Smitham",
"Spinka", "Stanton", "Stanton-Streich", "Stark", "Steuber", "Stiedemann-Mohr", "Stokes",
"Stoltenberg-Wolf", "Stracke", "Streich", "Stroman", "Strosin", "Swaniawski", "Thiel",
"Thompson", "Torp", "Torphy", "Toy", "Trantow", "Tromp", "Turcotte",
"Turner", "Ullrich", "Upton", "Vandervort", "Veum", "Volkman", "VonRueden",
"Waelchi", "Walker", "Walter", "Waters", "Watsica", "Weber", "Weimann",
"West", "Wilderman", "Wilkinson", "Will", "Williamson", "Windler", "Wisozk",
"Witting", "Wiza", "Wolf", "Wolf-Luettgen", "Wolff", "Wuckert", "Wunsch",
"Yost", "Zboncak", "Zieme", "Zulauf"
};
