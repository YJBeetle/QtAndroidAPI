#include "./IntentFilter_MalformedMimeTypeException.hpp"

namespace android::content
{
	// Fields
	
	IntentFilter_MalformedMimeTypeException::IntentFilter_MalformedMimeTypeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IntentFilter_MalformedMimeTypeException::IntentFilter_MalformedMimeTypeException()
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter$MalformedMimeTypeException",
			"()V"
		);
	}
	IntentFilter_MalformedMimeTypeException::IntentFilter_MalformedMimeTypeException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentFilter$MalformedMimeTypeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::content

