#include "./FillResponse.hpp"
#include "./FillCallback.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	FillCallback::FillCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void FillCallback::onFailure(jstring arg0)
	{
		callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void FillCallback::onSuccess(android::service::autofill::FillResponse arg0)
	{
		callMethod<void>(
			"onSuccess",
			"(Landroid/service/autofill/FillResponse;)V",
			arg0.object()
		);
	}
} // namespace android::service::autofill

