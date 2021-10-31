#include "../os/Parcel.hpp"
#include "./SyncRequest.hpp"

namespace android::content
{
	// Fields
	__JniBaseClass SyncRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.content.SyncRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SyncRequest::SyncRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SyncRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SyncRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content
