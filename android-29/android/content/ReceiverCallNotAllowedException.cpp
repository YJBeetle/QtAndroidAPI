#include "./ReceiverCallNotAllowedException.hpp"

namespace android::content
{
	// Fields
	
	ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ReceiverCallNotAllowedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ReceiverCallNotAllowedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::content

