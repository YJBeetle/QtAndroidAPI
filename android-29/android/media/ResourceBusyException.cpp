#include "./ResourceBusyException.hpp"

namespace android::media
{
	// Fields
	
	ResourceBusyException::ResourceBusyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ResourceBusyException::ResourceBusyException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.ResourceBusyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::media

