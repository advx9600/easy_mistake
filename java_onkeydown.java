	@Override
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        switch (keyCode) {
            case KeyEvent.KEYCODE_DPAD_UP:
                if (isShown() && getSelectedItemPosition() == 0) {
                    return true;
                }                
            case KeyEvent.KEYCODE_DPAD_DOWN:
                if (isShown() && getAdapter().getCount() == getSelectedItemPosition()+1) {
                    return true;
                }                
        }
        return super.onKeyDown(keyCode, event);
    }
	
	
	
	
	
// must add break