#include "../../os/Parcel.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./RegexValidator.hpp"

namespace android::service::autofill
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
	
	RegexValidator::RegexValidator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RegexValidator::RegexValidator(android::view::autofill::AutofillId &arg0, java::util::regex::Pattern &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.RegexValidator",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint RegexValidator::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring RegexValidator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RegexValidator::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill

