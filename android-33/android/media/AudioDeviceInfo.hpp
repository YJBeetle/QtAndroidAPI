#pragma once

#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AudioDeviceInfo.def.hpp"

namespace android::media
{
	// Fields
	inline jint AudioDeviceInfo::TYPE_AUX_LINE()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_AUX_LINE"
		);
	}
	inline jint AudioDeviceInfo::TYPE_BLE_BROADCAST()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLE_BROADCAST"
		);
	}
	inline jint AudioDeviceInfo::TYPE_BLE_HEADSET()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLE_HEADSET"
		);
	}
	inline jint AudioDeviceInfo::TYPE_BLE_SPEAKER()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLE_SPEAKER"
		);
	}
	inline jint AudioDeviceInfo::TYPE_BLUETOOTH_A2DP()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLUETOOTH_A2DP"
		);
	}
	inline jint AudioDeviceInfo::TYPE_BLUETOOTH_SCO()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLUETOOTH_SCO"
		);
	}
	inline jint AudioDeviceInfo::TYPE_BUILTIN_EARPIECE()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_EARPIECE"
		);
	}
	inline jint AudioDeviceInfo::TYPE_BUILTIN_MIC()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_MIC"
		);
	}
	inline jint AudioDeviceInfo::TYPE_BUILTIN_SPEAKER()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_SPEAKER"
		);
	}
	inline jint AudioDeviceInfo::TYPE_BUILTIN_SPEAKER_SAFE()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_SPEAKER_SAFE"
		);
	}
	inline jint AudioDeviceInfo::TYPE_BUS()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUS"
		);
	}
	inline jint AudioDeviceInfo::TYPE_DOCK()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_DOCK"
		);
	}
	inline jint AudioDeviceInfo::TYPE_FM()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_FM"
		);
	}
	inline jint AudioDeviceInfo::TYPE_FM_TUNER()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_FM_TUNER"
		);
	}
	inline jint AudioDeviceInfo::TYPE_HDMI()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HDMI"
		);
	}
	inline jint AudioDeviceInfo::TYPE_HDMI_ARC()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HDMI_ARC"
		);
	}
	inline jint AudioDeviceInfo::TYPE_HDMI_EARC()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HDMI_EARC"
		);
	}
	inline jint AudioDeviceInfo::TYPE_HEARING_AID()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HEARING_AID"
		);
	}
	inline jint AudioDeviceInfo::TYPE_IP()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_IP"
		);
	}
	inline jint AudioDeviceInfo::TYPE_LINE_ANALOG()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_LINE_ANALOG"
		);
	}
	inline jint AudioDeviceInfo::TYPE_LINE_DIGITAL()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_LINE_DIGITAL"
		);
	}
	inline jint AudioDeviceInfo::TYPE_REMOTE_SUBMIX()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_REMOTE_SUBMIX"
		);
	}
	inline jint AudioDeviceInfo::TYPE_TELEPHONY()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_TELEPHONY"
		);
	}
	inline jint AudioDeviceInfo::TYPE_TV_TUNER()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_TV_TUNER"
		);
	}
	inline jint AudioDeviceInfo::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_UNKNOWN"
		);
	}
	inline jint AudioDeviceInfo::TYPE_USB_ACCESSORY()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_USB_ACCESSORY"
		);
	}
	inline jint AudioDeviceInfo::TYPE_USB_DEVICE()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_USB_DEVICE"
		);
	}
	inline jint AudioDeviceInfo::TYPE_USB_HEADSET()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_USB_HEADSET"
		);
	}
	inline jint AudioDeviceInfo::TYPE_WIRED_HEADPHONES()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_WIRED_HEADPHONES"
		);
	}
	inline jint AudioDeviceInfo::TYPE_WIRED_HEADSET()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_WIRED_HEADSET"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean AudioDeviceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString AudioDeviceInfo::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		);
	}
	inline JObject AudioDeviceInfo::getAudioDescriptors() const
	{
		return callObjectMethod(
			"getAudioDescriptors",
			"()Ljava/util/List;"
		);
	}
	inline JObject AudioDeviceInfo::getAudioProfiles() const
	{
		return callObjectMethod(
			"getAudioProfiles",
			"()Ljava/util/List;"
		);
	}
	inline JIntArray AudioDeviceInfo::getChannelCounts() const
	{
		return callObjectMethod(
			"getChannelCounts",
			"()[I"
		);
	}
	inline JIntArray AudioDeviceInfo::getChannelIndexMasks() const
	{
		return callObjectMethod(
			"getChannelIndexMasks",
			"()[I"
		);
	}
	inline JIntArray AudioDeviceInfo::getChannelMasks() const
	{
		return callObjectMethod(
			"getChannelMasks",
			"()[I"
		);
	}
	inline JIntArray AudioDeviceInfo::getEncapsulationMetadataTypes() const
	{
		return callObjectMethod(
			"getEncapsulationMetadataTypes",
			"()[I"
		);
	}
	inline JIntArray AudioDeviceInfo::getEncapsulationModes() const
	{
		return callObjectMethod(
			"getEncapsulationModes",
			"()[I"
		);
	}
	inline JIntArray AudioDeviceInfo::getEncodings() const
	{
		return callObjectMethod(
			"getEncodings",
			"()[I"
		);
	}
	inline jint AudioDeviceInfo::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline JString AudioDeviceInfo::getProductName() const
	{
		return callObjectMethod(
			"getProductName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JIntArray AudioDeviceInfo::getSampleRates() const
	{
		return callObjectMethod(
			"getSampleRates",
			"()[I"
		);
	}
	inline jint AudioDeviceInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint AudioDeviceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AudioDeviceInfo::isSink() const
	{
		return callMethod<jboolean>(
			"isSink",
			"()Z"
		);
	}
	inline jboolean AudioDeviceInfo::isSource() const
	{
		return callMethod<jboolean>(
			"isSource",
			"()Z"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
