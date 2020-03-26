#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_REGEXVALIDATOR
#define ANDROID_SERVICE_AUTOFILL_REGEXVALIDATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::autofill
{
	class RegexValidator : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../view/autofill/AutofillId.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject RegexValidator::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.RegexValidator",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void RegexValidator::__constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.RegexValidator",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jstring RegexValidator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RegexValidator::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void RegexValidator::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class RegexValidator : public __jni_impl::android::service::autofill::RegexValidator
	{
	public:
		RegexValidator(QAndroidJniObject obj) { __thiz = obj; }
		RegexValidator(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_REGEXVALIDATOR

