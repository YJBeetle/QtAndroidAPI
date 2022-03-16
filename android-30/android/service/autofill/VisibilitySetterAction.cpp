#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./VisibilitySetterAction.hpp"

namespace android::service::autofill
{
	// Fields
	JObject VisibilitySetterAction::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.VisibilitySetterAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint VisibilitySetterAction::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString VisibilitySetterAction::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void VisibilitySetterAction::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

