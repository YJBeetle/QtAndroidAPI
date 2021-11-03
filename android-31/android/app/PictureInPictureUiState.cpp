#include "../os/Parcel.hpp"
#include "./PictureInPictureUiState.hpp"

namespace android::app
{
	// Fields
	JObject PictureInPictureUiState::CREATOR()
	{
		return getStaticObjectField(
			"android.app.PictureInPictureUiState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PictureInPictureUiState::PictureInPictureUiState(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PictureInPictureUiState::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PictureInPictureUiState::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PictureInPictureUiState::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PictureInPictureUiState::isStashed()
	{
		return callMethod<jboolean>(
			"isStashed",
			"()Z"
		);
	}
	void PictureInPictureUiState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

