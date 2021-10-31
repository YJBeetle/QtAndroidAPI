#include "./FormatException.hpp"

namespace android::nfc
{
	// Fields
	
	FormatException::FormatException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FormatException::FormatException()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.FormatException",
			"()V"
		);
	}
	FormatException::FormatException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.FormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FormatException::FormatException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.FormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::nfc

