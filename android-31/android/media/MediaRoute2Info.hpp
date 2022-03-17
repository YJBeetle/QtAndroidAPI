#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaRoute2Info.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaRoute2Info::CONNECTION_STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"CONNECTION_STATE_CONNECTED"
		);
	}
	inline jint MediaRoute2Info::CONNECTION_STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"CONNECTION_STATE_CONNECTING"
		);
	}
	inline jint MediaRoute2Info::CONNECTION_STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"CONNECTION_STATE_DISCONNECTED"
		);
	}
	inline JObject MediaRoute2Info::CREATOR()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString MediaRoute2Info::FEATURE_LIVE_AUDIO()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_LIVE_AUDIO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRoute2Info::FEATURE_LIVE_VIDEO()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_LIVE_VIDEO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRoute2Info::FEATURE_REMOTE_AUDIO_PLAYBACK()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_REMOTE_AUDIO_PLAYBACK",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRoute2Info::FEATURE_REMOTE_PLAYBACK()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_REMOTE_PLAYBACK",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaRoute2Info::FEATURE_REMOTE_VIDEO_PLAYBACK()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_REMOTE_VIDEO_PLAYBACK",
			"Ljava/lang/String;"
		);
	}
	inline jint MediaRoute2Info::PLAYBACK_VOLUME_FIXED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"PLAYBACK_VOLUME_FIXED"
		);
	}
	inline jint MediaRoute2Info::PLAYBACK_VOLUME_VARIABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"PLAYBACK_VOLUME_VARIABLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MediaRoute2Info::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MediaRoute2Info::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString MediaRoute2Info::getClientPackageName() const
	{
		return callObjectMethod(
			"getClientPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint MediaRoute2Info::getConnectionState() const
	{
		return callMethod<jint>(
			"getConnectionState",
			"()I"
		);
	}
	inline JString MediaRoute2Info::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::os::Bundle MediaRoute2Info::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JObject MediaRoute2Info::getFeatures() const
	{
		return callObjectMethod(
			"getFeatures",
			"()Ljava/util/List;"
		);
	}
	inline android::net::Uri MediaRoute2Info::getIconUri() const
	{
		return callObjectMethod(
			"getIconUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JString MediaRoute2Info::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline JString MediaRoute2Info::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint MediaRoute2Info::getVolume() const
	{
		return callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	inline jint MediaRoute2Info::getVolumeHandling() const
	{
		return callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	inline jint MediaRoute2Info::getVolumeMax() const
	{
		return callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	inline jint MediaRoute2Info::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean MediaRoute2Info::isSystemRoute() const
	{
		return callMethod<jboolean>(
			"isSystemRoute",
			"()Z"
		);
	}
	inline JString MediaRoute2Info::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MediaRoute2Info::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
