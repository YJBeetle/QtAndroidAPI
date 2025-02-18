#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PlaybackState_CustomAction.def.hpp"

namespace android::media::session
{
	// Fields
	inline JObject PlaybackState_CustomAction::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.PlaybackState$CustomAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PlaybackState_CustomAction::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString PlaybackState_CustomAction::getAction() const
	{
		return callObjectMethod(
			"getAction",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::Bundle PlaybackState_CustomAction::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint PlaybackState_CustomAction::getIcon() const
	{
		return callMethod<jint>(
			"getIcon",
			"()I"
		);
	}
	inline JString PlaybackState_CustomAction::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString PlaybackState_CustomAction::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PlaybackState_CustomAction::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::session

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::session;
#endif
