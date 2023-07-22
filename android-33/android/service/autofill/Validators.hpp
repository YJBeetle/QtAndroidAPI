#pragma once

#include "../../../JArray.hpp"
#include "./Validators.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Validators::and_(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"and",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object<jarray>()
		);
	}
	inline JObject Validators::not_(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"not",
			"(Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object()
		);
	}
	inline JObject Validators::or_(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"or",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object<jarray>()
		);
	}
} // namespace android::service::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
