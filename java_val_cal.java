import java.util.ArrayList;
import java.util.List;

public class aq {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		List<String > list = new ArrayList<>();
		list.add("12341");
		a.b(list.toString());
		aa(list);
		a.b(list.toString());
	}
	
	public static void aa(List<String> list){
		list = null;
	}
}


/*
 list无法改变其值，只是传值调用
*/
