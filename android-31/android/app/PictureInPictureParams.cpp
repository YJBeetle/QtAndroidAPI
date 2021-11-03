#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// QJniObject forward
	PictureInPictureParams::PictureInPictureParams(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PictureInPictureParams::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PictureInPictureParams::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PictureInPictureParams::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PictureInPictureParams::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
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

