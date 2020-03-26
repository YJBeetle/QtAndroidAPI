#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_DATEVALUESANITIZER
#define ANDROID_SERVICE_AUTOFILL_DATEVALUESANITIZER

#include "../../../__JniBaseClass.hpp"

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
	class DateValueSanitizer : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::icu::text::DateFormat arg0);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../icu/text/DateFormat.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject DateValueSanitizer::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.DateValueSanitizer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void DateValueSanitizer::__constructor(__jni_impl::android::icu::text::DateFormat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.DateValueSanitizer",
			"(Landroid/icu/text/DateFormat;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring DateValueSanitizer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateValueSanitizer::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DateValueSanitizer::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class DateValueSanitizer : public __jni_impl::android::service::autofill::DateValueSanitizer
	{
	public:
		DateValueSanitizer(QAndroidJniObject obj) { __thiz = obj; }
		DateValueSanitizer(__jni_impl::android::icu::text::DateFormat arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_DATEVALUESANITIZER

