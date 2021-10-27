#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::service::autofill
{
	class FieldClassification_Match : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getCategoryId();
		jfloat getScore();
		jstring toString();
	};
} // namespace __jni_impl::android::service::autofill


namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void FieldClassification_Match::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FieldClassification$Match",
			"(V)V");
	}
	
	// Methods
	jstring FieldClassification_Match::getCategoryId()
	{
		return __thiz.callObjectMethod(
			"getCategoryId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat FieldClassification_Match::getScore()
	{
		return __thiz.callMethod<jfloat>(
			"getScore",
			"()F"
		);
	}
	jstring FieldClassification_Match::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class FieldClassification_Match : public __jni_impl::android::service::autofill::FieldClassification_Match
	{
	public:
		FieldClassification_Match(QAndroidJniObject obj) { __thiz = obj; }
		FieldClassification_Match()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

