#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./FillEventHistory.hpp"

namespace android::service::autofill
{
	// Fields
	JObject FillEventHistory::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.FillEventHistory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint FillEventHistory::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::Bundle FillEventHistory::getClientState() const
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	JObject FillEventHistory::getEvents() const
	{
		return callObjectMethod(
			"getEvents",
			"()Ljava/util/List;"
		);
	}
	JString FillEventHistory::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void FillEventHistory::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

