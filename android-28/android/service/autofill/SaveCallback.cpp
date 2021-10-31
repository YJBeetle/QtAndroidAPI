#include "../../content/IntentSender.hpp"
#include "./SaveCallback.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	SaveCallback::SaveCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void SaveCallback::onFailure(jstring arg0)
	{
		callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void SaveCallback::onSuccess()
	{
		callMethod<void>(
			"onSuccess",
			"()V"
		);
	}
	void SaveCallback::onSuccess(android::content::IntentSender arg0)
	{
		callMethod<void>(
			"onSuccess",
			"(Landroid/content/IntentSender;)V",
			arg0.object()
		);
	}
} // namespace android::service::autofill

