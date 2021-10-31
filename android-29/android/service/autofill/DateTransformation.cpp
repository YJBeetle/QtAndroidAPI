#include "../../icu/text/DateFormat.hpp"
#include "../../os/Parcel.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "./DateTransformation.hpp"

namespace android::service::autofill
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
	
	DateTransformation::DateTransformation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateTransformation::DateTransformation(android::view::autofill::AutofillId arg0, android::icu::text::DateFormat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.DateTransformation",
			"(Landroid/view/autofill/AutofillId;Landroid/icu/text/DateFormat;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint DateTransformation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DateTransformation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DateTransformation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill

