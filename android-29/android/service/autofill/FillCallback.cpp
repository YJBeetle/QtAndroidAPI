#include "./FillResponse.hpp"
#include "./FillCallback.hpp"

namespace android::service::autofill
{
	// Fields
	
	FillCallback::FillCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void FillCallback::onFailure(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void FillCallback::onSuccess(android::service::autofill::FillResponse arg0)
	{
		__thiz.callMethod<void>(
			"onSuccess",
			"(Landroid/service/autofill/FillResponse;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::autofill

