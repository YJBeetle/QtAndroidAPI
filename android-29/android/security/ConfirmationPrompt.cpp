#include "../content/Context.hpp"
#include "./ConfirmationCallback.hpp"
#include "./ConfirmationPrompt.hpp"

namespace android::security
{
	// Fields
	
	ConfirmationPrompt::ConfirmationPrompt(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean ConfirmationPrompt::isSupported(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.security.ConfirmationPrompt",
			"isSupported",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
	void ConfirmationPrompt::cancelPrompt()
	{
		__thiz.callMethod<void>(
			"cancelPrompt",
			"()V"
		);
	}
	void ConfirmationPrompt::presentPrompt(__JniBaseClass arg0, android::security::ConfirmationCallback arg1)
	{
		__thiz.callMethod<void>(
			"presentPrompt",
			"(Ljava/util/concurrent/Executor;Landroid/security/ConfirmationCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::security

