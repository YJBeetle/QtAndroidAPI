#include "../../icu/text/DateFormat.hpp"
#include "../../os/Parcel.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../../JString.hpp"
#include "./DateTransformation.hpp"

namespace android::service::autofill
{
	// Fields
	JObject DateTransformation::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.DateTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	DateTransformation::DateTransformation(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateTransformation::DateTransformation(android::view::autofill::AutofillId arg0, android::icu::text::DateFormat arg1)
		: JObject(
			"android.service.autofill.DateTransformation",
			"(Landroid/view/autofill/AutofillId;Landroid/icu/text/DateFormat;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint DateTransformation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString DateTransformation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void DateTransformation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

