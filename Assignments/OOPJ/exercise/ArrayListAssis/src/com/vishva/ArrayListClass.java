package com.vishva;

import java.util.ArrayList;
import java.util.Iterator;

public class ArrayListClass {

	public static void main(String[] args) {
		//problem1
		ArrayList<String> list = new ArrayList<String>(); 
		list.add("red");
		list.add("green");
		list.add("blue");
		
		System.out.println("Colours : " + list);
		System.out.println("=====================================");
		//problem 2
		
		list.add(0, "Black");
		System.out.println("After adding 1st elements : "+ list);
		System.out.println("=====================================");
		//problem 3
		

		System.out.println("Specific index : "+list.get(2) );
		System.out.println("=====================================");
		
		list.remove(2);
		System.out.println("Remove a specific element : "+ list);
		System.out.println("=====================================");
		
		String searchEle = "blue";
		if(list.contains(searchEle)) {
			System.out.println(searchEle + " is present in the list");
		}else {
			System.out.println(searchEle + " is not present in the list");
		}

		}
		
	}

