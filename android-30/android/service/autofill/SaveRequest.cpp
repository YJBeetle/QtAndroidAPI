#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./SaveRequest.hpp"

namespace android::service::autofill
{
	// Fields
	JObject SaveRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.SaveRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint SaveRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::Bundle SaveRequest::getClientState() const
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	JObject SaveRequest::getDatasetIds() const
	{
		return callObjectMethod(
			"getDatasetIds",
			"()Ljava/util/List;"
		);
	}
	JObject SaveRequest::getFillContexts() const
	{
		return callObjectMethod(
			"getFillContexts",
			"()Ljava/util/List;"
		);
	}
	void SaveRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

