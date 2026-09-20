package com.vishva;

import java.util.NavigableSet;
import java.util.TreeSet;

public class TreeSetsExercise {

	public static void main(String[] args) {
		//problem5
		TreeSet<String> color= new TreeSet<>();
		
		color.add("Red");
		color.add("Blue");
		color.add("Green");
		color.add("Black");
		color.add("Pink");
		
		System.out.println(" colour list is : "+ color);

		//problem 6
		TreeSet<String> color2 = new TreeSet<>();
		
		color2.add("");
		color2.add("");
		color2.add("");
		color2.add("");
		color2.add("");
		
		color2.addAll(color);
		
		System.out.println("Original colour list : "+color);
		System.out.println("after adding all list  : "+color2);
		
		//problem 7
		TreeSet<Integer> tset = new TreeSet<>();
		tset.add(10);
		tset.add(20);
		tset.add(30);
		tset.add(40);
		tset.add(50);
		
		System.out.println("before reverse  : " + tset);
		
		NavigableSet<Integer> reverse = tset.descendingSet();
		System.out.println(" After Reverse list : "+ reverse);
		
		//problem 8
		System.out.println("First element is : " + tset.first());
		
		System.out.println("Last element is : " + tset.last());
		
		//problem 9
		System.out.println("greater than or equal to the given element : ");
		System.out.println(tset.ceiling(20));
		System.out.println(tset.ceiling(50));
		System.out.println(tset.ceiling(80));
	}

}
