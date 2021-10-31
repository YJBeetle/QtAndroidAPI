#include "../../os/Parcel.hpp"
#include "./LuhnChecksumValidator.hpp"

namespace android::service::autofill
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
	
	LuhnChecksumValidator::LuhnChecksumValidator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LuhnChecksumValidator::LuhnChecksumValidator(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.LuhnChecksumValidator",
			"([Landroid/view/autofill/AutofillId;)V",
			arg0
		);
	}
	
	// Methods
	jint LuhnChecksumValidator::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring LuhnChecksumValidator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LuhnChecksumValidator::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill

