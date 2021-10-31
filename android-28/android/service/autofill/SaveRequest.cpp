#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./SaveRequest.hpp"

namespace android::service::autofill
{
	// Fields
	__JniBaseClass SaveRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.SaveRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	SaveRequest::SaveRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SaveRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::Bundle SaveRequest::getClientState()
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	__JniBaseClass SaveRequest::getDatasetIds()
	{
		return callObjectMethod(
			"getDatasetIds",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass SaveRequest::getFillContexts()
	{
		return callObjectMethod(
			"getFillContexts",
			"()Ljava/util/List;"
		);
	}
	void SaveRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

