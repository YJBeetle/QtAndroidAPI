#include "../os/Parcel.hpp"
#include "./SyncRequest.hpp"

namespace android::content
{
	// Fields
	JObject SyncRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.content.SyncRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint SyncRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SyncRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

