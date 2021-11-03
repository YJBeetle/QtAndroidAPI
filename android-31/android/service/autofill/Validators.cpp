#include "./Validators.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	Validators::Validators(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Validators::_and(jarray arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"and",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0
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
	JObject Validators::_or(jarray arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"or",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0
		);
	}
} // namespace android::service::autofill

