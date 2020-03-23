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
		QAndroidJniObject toString();
		QAndroidJniObject getMatches();
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
	QAndroidJniObject FieldClassification::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject FieldClassification::getMatches()
	{
		return __thiz.callObjectMethod(
			"getMatches",
			"()Ljava/util/List;");
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

