#include "./FillResponse.hpp"
#include "../../../JString.hpp"
#include "./FillCallback.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	void FillCallback::onFailure(JString arg0) const
	{
		callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void FillCallback::onSuccess(android::service::autofill::FillResponse arg0) const
	{
		callMethod<void>(
			"onSuccess",
			"(Landroid/service/autofill/FillResponse;)V",
			arg0.object()
		);
	}
} // namespace android::service::autofill

