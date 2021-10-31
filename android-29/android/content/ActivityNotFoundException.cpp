#include "./ActivityNotFoundException.hpp"

namespace android::content
{
	// Fields
	
	ActivityNotFoundException::ActivityNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActivityNotFoundException::ActivityNotFoundException()
	{
		__thiz = QAndroidJniObject(
			"android.content.ActivityNotFoundException",
			"()V"
		);
	}
	ActivityNotFoundException::ActivityNotFoundException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ActivityNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::content

