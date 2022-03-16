#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
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
	
	// Constructors
	
	// Methods
	jint PictureInPictureUiState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PictureInPictureUiState::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PictureInPictureUiState::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PictureInPictureUiState::isStashed() const
	{
		return callMethod<jboolean>(
			"isStashed",
			"()Z"
		);
	}
	void PictureInPictureUiState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

