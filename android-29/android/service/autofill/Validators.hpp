#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_VALIDATORS
#define ANDROID_SERVICE_AUTOFILL_VALIDATORS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::service::autofill
{
	class Validators : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject _and(jarray arg0);
		static QAndroidJniObject _not(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject _or(jarray arg0);
	};
} // namespace __jni_impl::android::service::autofill


namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void Validators::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.Validators",
			"(V)V");
	}
	
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
	QAndroidJniObject Validators::_not(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.autofill.Validators",
			"not",
			"(Landroid/service/autofill/Validator;)Landroid/service/autofill/Validator;",
			arg0.__jniObject().object()
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
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class Validators : public __jni_impl::android::service::autofill::Validators
	{
	public:
		Validators(QAndroidJniObject obj) { __thiz = obj; }
		Validators()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_VALIDATORS

