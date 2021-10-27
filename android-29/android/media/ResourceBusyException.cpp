#include "./ResourceBusyException.hpp"

namespace android::media
{
	// Fields
	
	ResourceBusyException::ResourceBusyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ResourceBusyException::ResourceBusyException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.ResourceBusyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ResourceBusyException::ResourceBusyException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.ResourceBusyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::media

