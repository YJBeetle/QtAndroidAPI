#include "../../../JArray.hpp"
#include "./Validators.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	Validators::Validators(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Validators::_and(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"and",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object<jarray>()
		);
	}
	JObject Validators::_not(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"not",
			"(Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object()
		);
	}
	JObject Validators::_or(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"or",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object<jarray>()
		);
	}
} // namespace android::service::autofill

