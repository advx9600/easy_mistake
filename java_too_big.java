	public static void main(String[] args) {
		// TODO Auto-generated method stub
			int t = 1478571898 *1000;
			Date date = new Date(t);
			a.b("t        :"+t);
			a.b("timestamp:"+date.getTime());
			SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
			
			a.b(simpleDateFormat.format(date));
	}





## long t = 1478571898l *1000;
