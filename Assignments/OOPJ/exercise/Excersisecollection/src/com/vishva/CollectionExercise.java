package com.vishva;

import java.util.ArrayList;
import java.util.Collections;

public class CollectionExercise {

	public static void main(String[] args) {
		//problem 1
		ArrayList<Integer> list = new ArrayList<>();
		
		list.add(50);
		list.add(20);
		list.add(60);
		list.add(40);
		list.add(10);
		
		Collections.sort(list);
		System.out.println(list);
		
		//problem 2
		ArrayList<Integer> list2 = new ArrayList<>();
		list2.add(null);
		list2.add(null);
		list2.add(null);
		list2.add(null);
		list2.add(null);
		
		Collections.copy(list2, list);

		System.out.println("Original list : " + list);
		System.out.println("Copied list : " + list2);
		
		//Problem 3
		Collections.shuffle(list);
		System.out.println("Shuffled list : "+ list);
		
		//problem 4
		Collections.reverse(list);
		System.out.println("Reverse the list : "+ list);
	}

}
