package QtAndroidApiExample;

class mainwindow
{
    public static android.content.DialogInterface.OnClickListener clickListener = new android.content.DialogInterface.OnClickListener() {
        public void onClick(android.content.DialogInterface d, int i) {
            callCppAlertDialogPositive();
        }
    };

    private static native void callCppAlertDialogPositive();
}
