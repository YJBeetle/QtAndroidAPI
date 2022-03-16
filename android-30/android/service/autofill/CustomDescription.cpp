#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./CustomDescription.hpp"

namespace android::service::autofill
{
	// Fields
	JObject CustomDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.CustomDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint CustomDescription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString CustomDescription::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CustomDescription::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

