#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_DATETRANSFORMATION
#define ANDROID_SERVICE_AUTOFILL_DATETRANSFORMATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}
namespace __jni_impl::android::icu::text
{
	class DateFormat;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::autofill
{
	class DateTransformation : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::icu::text::DateFormat arg1);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../view/autofill/AutofillId.hpp"
#include "../../icu/text/DateFormat.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject DateTransformation::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.DateTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void DateTransformation::__constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::icu::text::DateFormat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.DateTransformation",
			"(Landroid/view/autofill/AutofillId;Landroid/icu/text/DateFormat;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jstring DateTransformation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateTransformation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DateTransformation::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class DateTransformation : public __jni_impl::android::service::autofill::DateTransformation
	{
	public:
		DateTransformation(QAndroidJniObject obj) { __thiz = obj; }
		DateTransformation(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::icu::text::DateFormat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_DATETRANSFORMATION

