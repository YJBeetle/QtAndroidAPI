#include "../../content/IntentSender.hpp"
#include "../../../JString.hpp"
#include "./SaveCallback.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	void SaveCallback::onFailure(JString arg0) const
	{
		callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void SaveCallback::onSuccess() const
	{
		callMethod<void>(
			"onSuccess",
			"()V"
		);
	}
	void SaveCallback::onSuccess(android::content::IntentSender arg0) const
	{
		callMethod<void>(
			"onSuccess",
			"(Landroid/content/IntentSender;)V",
			arg0.object()
		);
	}
} // namespace android::service::autofill

