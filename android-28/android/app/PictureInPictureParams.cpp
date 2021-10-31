#include "../os/Parcel.hpp"
#include "./PictureInPictureParams.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass PictureInPictureParams::CREATOR()
	{
		return getStaticObjectField(
			"android.app.PictureInPictureParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	PictureInPictureParams::PictureInPictureParams(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PictureInPictureParams::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PictureInPictureParams::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

