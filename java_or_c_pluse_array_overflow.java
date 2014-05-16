	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str="";
//		str.repl
		List<Integer> list = new ArrayList<Integer>();
		list.add(1);
		list.add(2);
		list.add(3);
		int count = list.size();
		for (int i =0;i<count;i++)
		{
			System.out.println(list.get(i));
			if (list.get(i)==2) list.remove(i);
		}
		 
	}
