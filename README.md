# INFO450FavoriteThing

## Functional Requirements
- My Favorite Things are those things that people like to do, eat, or drink ... The intent of this assignement is to build a tracker for one of your favorite things. This tracker will allow you to build and maintain a list of your favorite things.

- Constraints
	- Your favorite things need to have data that describes and identifies them (info that you'd like to track)

- Capabilities:
	- Your program should provide welcoming info, describing the favorite thing to be tracked.
	- Your program should provide input capability for you to capture one or more new items and add to your list.
	- Your program should continue to allow input of new favorite items until the user selects not to continue.
	- Your program should check and NOT allow you to add the same thing more than once (note: you must have a way of identifying a duplpicate)
	- Your program should provide the capability to dislpay your ist of things to the console.

## Program Requirements
- Design and implement a set of classes in C++ to support all of the functional requirements listed above.
- At a minimum you should have:
	- A class for your favorite thing
	- A list class that contains the collections of your favorite things
- Your favorite thing should contain:
	- At least 5 private member elements (data)
	- Use the string class for any member data that is a name or description
	- One or more constructors
	- A method to capture a new favorite item
	- An overloaded << operator friend function that will display your favorite item to the console
- Your list class should have:
	- An Array of favorite things (Max size: 100) and any additional member data needed for the ist (e.g. listsize)
	- One or more constructors
	- A method that checks if an item already exists. The method should be passed a reference to a favorite thing object and return a boolean true/false (duplicate or not) value.
	- A method to Add a new item to the list when passed a reference to a favorite thing object (note: you should have already determined that the item is not duplicate)
	- A method to print the entire list to the console in a "pretty way", leveragining the overloaded << operator from the favorite thing class. 
- Your program should be constructed such that you have one .h and .cpp file per class. And the main (driver) function should be a separate cpp file (similar to the class inventory example)

## Extra Credit
- Add the additional capability for your user (you!) to delete an item from the list (no longer a favorite ☹ ). 
- The user should be asked to enter the attribute or attributes that uniquely identify the item
	- if found, the item is removed from the list

