#include "../../icu/text/DateFormat.hpp"
#include "../../os/Parcel.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "./DateTransformation.hpp"

namespace android::service::autofill
{
	// Fields
	__JniBaseClass DateTransformation::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.DateTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	DateTransformation::DateTransformation(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DateTransformation::DateTransformation(android::view::autofill::AutofillId arg0, android::icu::text::DateFormat arg1)
		: __JniBaseClass(
			"android.service.autofill.DateTransformation",
			"(Landroid/view/autofill/AutofillId;Landroid/icu/text/DateFormat;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint DateTransformation::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DateTransformation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DateTransformation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

