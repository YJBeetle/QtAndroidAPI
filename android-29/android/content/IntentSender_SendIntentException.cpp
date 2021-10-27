#include "../../java/lang/Exception.hpp"
#include "./IntentSender_SendIntentException.hpp"

namespace android::content
{
	// Fields
	
	IntentSender_SendIntentException::IntentSender_SendIntentException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IntentSender_SendIntentException::IntentSender_SendIntentException()
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentSender$SendIntentException",
			"()V"
		);
	}
	IntentSender_SendIntentException::IntentSender_SendIntentException(java::lang::Exception &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentSender$SendIntentException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	IntentSender_SendIntentException::IntentSender_SendIntentException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentSender$SendIntentException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IntentSender_SendIntentException::IntentSender_SendIntentException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentSender$SendIntentException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::content

