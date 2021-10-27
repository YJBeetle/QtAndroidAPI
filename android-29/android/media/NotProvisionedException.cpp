#include "./NotProvisionedException.hpp"

namespace android::media
{
	// Fields
	
	NotProvisionedException::NotProvisionedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotProvisionedException::NotProvisionedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.NotProvisionedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NotProvisionedException::NotProvisionedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.NotProvisionedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::media

