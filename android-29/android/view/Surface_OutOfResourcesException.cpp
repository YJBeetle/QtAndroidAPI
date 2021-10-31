#include "./Surface_OutOfResourcesException.hpp"

namespace android::view
{
	// Fields
	
	Surface_OutOfResourcesException::Surface_OutOfResourcesException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Surface_OutOfResourcesException::Surface_OutOfResourcesException()
	{
		__thiz = QAndroidJniObject(
			"android.view.Surface$OutOfResourcesException",
			"()V"
		);
	}
	Surface_OutOfResourcesException::Surface_OutOfResourcesException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.Surface$OutOfResourcesException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::view

