#include "./Validators.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	Validators::Validators(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Validators::_and(jarray arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"and",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0
		);
	}
	__JniBaseClass Validators::_not(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"not",
			"(Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object()
		);
	}
	__JniBaseClass Validators::_or(jarray arg0)
	{
		return callStaticObjectMethod(
			"android.service.autofill.Validators",
			"or",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0
		);
	}
} // namespace android::service::autofill

