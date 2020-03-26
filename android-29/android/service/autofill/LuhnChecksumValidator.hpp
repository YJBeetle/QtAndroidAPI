#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR
#define ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::autofill
{
	class LuhnChecksumValidator : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jarray arg0);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject LuhnChecksumValidator::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.LuhnChecksumValidator",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void LuhnChecksumValidator::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.LuhnChecksumValidator",
			"([Landroid/view/autofill/AutofillId;)V",
			arg0);
	}
	
	// Methods
	jstring LuhnChecksumValidator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LuhnChecksumValidator::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void LuhnChecksumValidator::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class LuhnChecksumValidator : public __jni_impl::android::service::autofill::LuhnChecksumValidator
	{
	public:
		LuhnChecksumValidator(QAndroidJniObject obj) { __thiz = obj; }
		LuhnChecksumValidator(jarray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR

