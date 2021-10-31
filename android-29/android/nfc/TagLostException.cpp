#include "./TagLostException.hpp"

namespace android::nfc
{
	// Fields
	
	TagLostException::TagLostException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TagLostException::TagLostException()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.TagLostException",
			"()V"
		);
	}
	TagLostException::TagLostException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.TagLostException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::nfc

