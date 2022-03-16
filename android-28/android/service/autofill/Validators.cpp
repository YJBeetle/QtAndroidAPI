#include "../../../JArray.hpp"
#include "./Validators.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject Validators::and_(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"and",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object<jarray>()
		);
	}
	JObject Validators::not_(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"not",
			"(Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object()
		);
	}
	JObject Validators::or_(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"or",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object<jarray>()
		);
	}
} // namespace android::service::autofill

