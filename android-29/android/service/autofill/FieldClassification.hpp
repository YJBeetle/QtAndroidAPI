#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_FIELDCLASSIFICATION
#define ANDROID_SERVICE_AUTOFILL_FIELDCLASSIFICATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::service::autofill
{
	class FieldClassification : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getMatches();
		jstring toString();
	};
} // namespace __jni_impl::android::service::autofill

#include "../../../java/util/ArrayList.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void FieldClassification::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FieldClassification",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FieldClassification::getMatches()
	{
		return __thiz.callObjectMethod(
			"getMatches",
			"()Ljava/util/List;"
		);
	}
	jstring FieldClassification::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class FieldClassification : public __jni_impl::android::service::autofill::FieldClassification
	{
	public:
		FieldClassification(QAndroidJniObject obj) { __thiz = obj; }
		FieldClassification()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_FIELDCLASSIFICATION

