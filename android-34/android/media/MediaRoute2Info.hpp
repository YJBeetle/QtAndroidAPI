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
	inline jint MediaRoute2Info::TYPE_BLE_HEADSET()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_BLE_HEADSET"
		);
	}
	inline jint MediaRoute2Info::TYPE_BLUETOOTH_A2DP()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_BLUETOOTH_A2DP"
		);
	}
	inline jint MediaRoute2Info::TYPE_BUILTIN_SPEAKER()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_BUILTIN_SPEAKER"
		);
	}
	inline jint MediaRoute2Info::TYPE_DOCK()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_DOCK"
		);
	}
	inline jint MediaRoute2Info::TYPE_GROUP()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_GROUP"
		);
	}
	inline jint MediaRoute2Info::TYPE_HDMI()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_HDMI"
		);
	}
	inline jint MediaRoute2Info::TYPE_HEARING_AID()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_HEARING_AID"
		);
	}
	inline jint MediaRoute2Info::TYPE_REMOTE_AUDIO_VIDEO_RECEIVER()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_REMOTE_AUDIO_VIDEO_RECEIVER"
		);
	}
	inline jint MediaRoute2Info::TYPE_REMOTE_SPEAKER()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_REMOTE_SPEAKER"
		);
	}
	inline jint MediaRoute2Info::TYPE_REMOTE_TV()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_REMOTE_TV"
		);
	}
	inline jint MediaRoute2Info::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_UNKNOWN"
		);
	}
	inline jint MediaRoute2Info::TYPE_USB_ACCESSORY()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_USB_ACCESSORY"
		);
	}
	inline jint MediaRoute2Info::TYPE_USB_DEVICE()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_USB_DEVICE"
		);
	}
	inline jint MediaRoute2Info::TYPE_USB_HEADSET()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_USB_HEADSET"
		);
	}
	inline jint MediaRoute2Info::TYPE_WIRED_HEADPHONES()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_WIRED_HEADPHONES"
		);
	}
	inline jint MediaRoute2Info::TYPE_WIRED_HEADSET()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"TYPE_WIRED_HEADSET"
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
	inline JObject MediaRoute2Info::getDeduplicationIds() const
	{
		return callObjectMethod(
			"getDeduplicationIds",
			"()Ljava/util/Set;"
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
	inline jint MediaRoute2Info::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
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
