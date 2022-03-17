#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "./PictureInPictureUiState.def.hpp"

namespace android::app
{
	// Fields
	inline JObject PictureInPictureUiState::CREATOR()
	{
		return getStaticObjectField(
			"android.app.PictureInPictureUiState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PictureInPictureUiState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PictureInPictureUiState::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PictureInPictureUiState::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean PictureInPictureUiState::isStashed() const
	{
		return callMethod<jboolean>(
			"isStashed",
			"()Z"
		);
	}
	inline void PictureInPictureUiState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

