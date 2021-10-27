#include "../../content/IntentSender.hpp"
#include "./SaveCallback.hpp"

namespace android::service::autofill
{
	// Fields
	
	SaveCallback::SaveCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void SaveCallback::onFailure(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void SaveCallback::onFailure(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SaveCallback::onSuccess()
	{
		__thiz.callMethod<void>(
			"onSuccess",
			"()V"
		);
	}
	void SaveCallback::onSuccess(android::content::IntentSender arg0)
	{
		__thiz.callMethod<void>(
			"onSuccess",
			"(Landroid/content/IntentSender;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::autofill

