#include "./Validators.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	Validators::Validators(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Validators::_and(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.autofill.Validators",
			"and",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0
		);
	}
	QAndroidJniObject Validators::_not(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.autofill.Validators",
			"not",
			"(Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.object()
		);
	}
	QAndroidJniObject Validators::_or(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.autofill.Validators",
			"or",
			"([Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0
		);
	}
} // namespace android::service::autofill

