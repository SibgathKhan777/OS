    Add two matrice
    package Programs;
import java.util.Scanner;
public class MatrixA {
public static void main (String[] args)
{
// TODO Auto-generated method stub
int n = Integer.parseInt (args[0]);
int i,j;
int[ ][ ] matrix1 = new int[n][n];
int[ ][ ] matrix2 = new int[n][n];
int[ ][ ] sum = new int[n][n];
Scanner sc=new Scanner(System.in);
// Initialize matrices with some values, for example, i+j
System.out.println("Enter the elements in the matrix1:");
for ( i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
matrix1[i][j] = sc.nextInt();
}
}
System.out.println("Enter the elements in the matrix2:");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
matrix2[i][j] = sc.nextInt();
}
}
// Add the matrices
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
sum[i][j] = matrix1[i][j] + matrix2[i][j];
}
}
// Print the result
System.out.println("Sum of matrices is: ");
for ( i = 0; i < n; i++)
{
for ( j = 0; j < n; j++)
{
System.out.print(" " +sum[i][j] );
}
System.out.println();
}
}
}




      Develop a stack


      package Programs;
import java.util.Scanner;
class Stack {
private int[] elements;
private int top;
public Stack() {
elements = new int[10];
top = -1;
public boolean isEmpty() {
return top == -1;
public boolean isFull() {
return top == 9;
}
}
}
public void push(int element) {
if (isFull()) {
System.out.println("Stack is full. Cannot push more elements.");
} else {
elements[++top] = element;
System.out.println("Pushed: " + element);
}
}
public void pop() {
if (isEmpty()) {
System.out.println("Stack is empty. Cannot pop elements.");
} else {
int poppedElement = elements[top--];
System.out.println("Popped: " + poppedElement);
}
}
public void printStack() {
BCS306A ORIENTED PROGRAMMING WITH JAVA
if (isEmpty()) {
System.out.println("Stack is empty.");
} else {
System.out.print("Stack: ");
for (int i = 0; i <= top; i++) {
System.out.print(elements[i] + " ");
}
System.out.println();
}
}
}
public class Main {
public static void main(String[] args) {
Stack stack = new Stack();
while(true)
{
System.out.println("Stack Operations");
System.out.println("1. Push");
System.out.println("2. Pop");
System.out.println("3. Display");
System.out.println("4. Exit");
Scanner sc = new Scanner(System.in);
System.out.print("Enter your Choice: ");
int choice = sc.nextInt();
switch(choice)
{
case 1: System.out.println("Enter Number to push: ");
int num = sc.nextInt();
stack.push(num);
break;
stack.pop();
break;
case 3: stack.printStack();
break;
case 4: System.exit(0);
break;
default: System.out.println("Invalid choice ");
case 2:
}
}
}
}

           Employee 
package Programs;
import java.util.Scanner;
public class Employee {
private int empId;
private String name;
private double salary;
public Employee(int empId, String name, double salary) {
this.empId = empId;
this.name = name;
this.salary = salary;
}
public void raiseSalary(double percentage) {
if (percentage > 0) {
double raiseAmount = salary * (percentage / 100);
salary += raiseAmount;
}
}
public void displayInfo() {
System.out.println("Employee ID: " + empId);
System.out.println("Name: " + name);
System.out.println("Salary: Rs." + String.format("%.2f", salary));
}
public static void main(String[] args) {
// Creating an Employee object
Employee emp = new Employee(1, "Dr. STHIRA", 50000.0);
Scanner scanner = new Scanner(System.in);
BCS306A // Displaying employee information before raise
System.out.println("Employee information before raise:");
emp.displayInfo();
System.out.println("Enter the percentage of salary to raise:");
int percentage = scanner.nextInt();
// Raising salary by 10%
emp.raiseSalary(percentage);
// Displaying employee information after raise
System.out.println("\nEmployee information after raise:");
emp.displayInfo();
}
}



               MyPoint
package Programs;
public class MyPoint {
private int x;
private int y;
// Default constructor
public MyPoint() {
this.x = 0;
this.y = 0;
}
// Overloaded constructor
public MyPoint(int x, int y) {
this.x = x;
this.y = y;
}
// Setters for x and y
public void setXY(int x, int y) {
this.x = x;
this.y = y;
}
// Getter for x and y
public int[] getXY() {
int[] coordinates = {x, y};
return coordinates;
}
// Returns the string description of the instance in the format "(x, y)"
@Override
public String toString() {
return "(" + x + ", " + y + ")";
}
// Calculates distance from this point to another point (x, y)
public double distance(int x, int y) {
int xDiff = this.x - x;
int yDiff = this.y - y;
return Math.sqrt(xDiff * xDiff + yDiff * yDiff);
}
// Calculates distance from this point to another MyPoint instance
public double distance(MyPoint another) {
int xDiff = this.x - another.x;
int yDiff = this.y - another.y;
return Math.sqrt(xDiff * xDiff + yDiff * yDiff);
// Calculates distance from this point to the origin (0, 0)
public double distance() {
return Math.sqrt(x * x + y * y);
}
}
public static void main(String[] args) {
MyPoint point1 = new MyPoint(); // Default constructor (0,0)
System.out.println("Point 1: " + point1);
MyPoint point2 = new MyPoint(3,4); // Overloaded constructor (3,4)
System.out.println("Point 2: " + point2);
point1.setXY(1,2);//9 Set coordinates using setXY() method
System.out.println("Point 1 after setXY(): " + point1);
int[] coordinates = point2.getXY(); // Get coordinates using getXY() method
System.out.println("Point 2 coordinates: (" + coordinates[0] + ", " + coordinates[1] +")")
System.out.println("Distance between Point 1 and (1,2): " + point1.distance(1,2));
System.out.println("Distance between Point 1 and Point 2: " + point1.distance(point2));
System.out.println("Distance from Point 2 to origin: " + point1.distance());
}
}


              CREATE A SHAPE 
package Programs;
//Shape class (Superclass)
class Shape {
public void draw() {
System.out.println("Drawing a shape");
}
public void erase() {
System.out.println("Erasing a shape");
}
}
//Circle class (Subclass)
class Circle extends Shape {
@Override
public void draw() {
System.out.println("Drawing a circle");
}
@Override
public void erase() {
System.out.println("Erasing a circle");
}
}
//Triangle class (Subclass)
class Triangle extends Shape {
@Override
public void draw() {
System.out.println("Drawing a triangle");
}
@Override
public void erase() {
System.out.println("Erasing a triangle");
}
}
System.out.println("Drawing a square");
}
@Override
public void erase() {
System.out.println("Erasing a square");
}
}
//Main class
public class Main {
public static void main(String[] args) {
// Polymorphism: Creating objects of different subclasses using the reference of the superclass
Shape shape1 = new Circle();
Shape shape2 = new Triangle();
Shape shape3 = new Square();
// Demonstrating polymorphic behavior
shape1.draw(); // Calls draw() method of Circle class
shape1.erase(); // Calls erase() method of Circle class
shape2.draw(); // Calls draw() method of Triangle class
shape2.erase(); // Calls erase() method of Triangle class
shape3.draw(); // Calls draw() method of Square class
shape3.erase(); // Calls erase() method of Square class
}
}



         abstract class Shape

package Programs;
// Abstract Shape class
abstract class Shape {
// Abstract methods to calculate area and perimeter
abstract double calculateArea();
abstract double calculatePerimeter();
}
// Circle class extending Shape
class Circle extends Shape {
private double radius;
// Constructor for Circle class
public Circle(double radius) {
this.radius = radius;
}
// Implementation of abstract method to calculate area for Circle
@Override
double calculateArea() {
return Math.PI * radius * radius;
}
// Implementation of abstract method to calculate perimeter (circumference) for Circle
@Override
double calculatePerimeter() {
return 2 * Math.PI * radius;
}
}
// Triangle class extending Shape
class Triangle extends Shape {
private double side1;
private double side2;
private double side3;
// Constructor for Triangle class
public Triangle(double side1, double side2, double side3) {
this.side1 = side1;
this.side2 = side2;
this.side3 = side3;
}
// Implementation of abstract method to calculate area for Triangle using Heron's formula
@Override
double calculateArea() {
double s = (side1 + side2 + side3) / 2;
return Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
// Implementation of abstract method to calculate perimeter for Triangle
@Override
double calculatePerimeter() {
return side1 + side2 + side3;
}
}
// Main class
public class Main {
public static void main(String[] args) {
// Creating Circle and Triangle objects
Circle circle = new Circle(5);
Triangle triangle = new Triangle(3, 4, 5);
// Calculating and displaying area and perimeter for Circle
System.out.println("Circle - Area: " + circle.calculateArea() + ", circle.calculatePerimeter());
Perimeter: " +
// Calculating and displaying area and perimeter for Triangle
System.out.println("Triangle - Area: " + triangle.calculateArea() + ", Perimeter: " +
triangle.calculatePerimeter());
}
}
