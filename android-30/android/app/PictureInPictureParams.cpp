#include "../os/Parcel.hpp"
#include "./PictureInPictureParams.hpp"

namespace android::app
{
	// Fields
	JObject PictureInPictureParams::CREATOR()
	{
		return getStaticObjectField(
			"android.app.PictureInPictureParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint PictureInPictureParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PictureInPictureParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

