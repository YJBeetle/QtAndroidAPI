#include "../../../JArray.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./LuhnChecksumValidator.hpp"

namespace android::service::autofill
{
	// Fields
	JObject LuhnChecksumValidator::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.LuhnChecksumValidator",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	LuhnChecksumValidator::LuhnChecksumValidator(JArray arg0)
		: JObject(
			"android.service.autofill.LuhnChecksumValidator",
			"([Landroid/view/autofill/AutofillId;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	jint LuhnChecksumValidator::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString LuhnChecksumValidator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void LuhnChecksumValidator::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

