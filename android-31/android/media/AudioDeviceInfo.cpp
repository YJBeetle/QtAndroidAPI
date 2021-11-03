#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AudioDeviceInfo.hpp"

namespace android::media
{
	// Fields
	jint AudioDeviceInfo::TYPE_AUX_LINE()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_AUX_LINE"
		);
	}
	jint AudioDeviceInfo::TYPE_BLE_HEADSET()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLE_HEADSET"
		);
	}
	jint AudioDeviceInfo::TYPE_BLE_SPEAKER()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLE_SPEAKER"
		);
	}
	jint AudioDeviceInfo::TYPE_BLUETOOTH_A2DP()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLUETOOTH_A2DP"
		);
	}
	jint AudioDeviceInfo::TYPE_BLUETOOTH_SCO()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLUETOOTH_SCO"
		);
	}
	jint AudioDeviceInfo::TYPE_BUILTIN_EARPIECE()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_EARPIECE"
		);
	}
	jint AudioDeviceInfo::TYPE_BUILTIN_MIC()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_MIC"
		);
	}
	jint AudioDeviceInfo::TYPE_BUILTIN_SPEAKER()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_SPEAKER"
		);
	}
	jint AudioDeviceInfo::TYPE_BUILTIN_SPEAKER_SAFE()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_SPEAKER_SAFE"
		);
	}
	jint AudioDeviceInfo::TYPE_BUS()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUS"
		);
	}
	jint AudioDeviceInfo::TYPE_DOCK()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_DOCK"
		);
	}
	jint AudioDeviceInfo::TYPE_FM()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_FM"
		);
	}
	jint AudioDeviceInfo::TYPE_FM_TUNER()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_FM_TUNER"
		);
	}
	jint AudioDeviceInfo::TYPE_HDMI()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HDMI"
		);
	}
	jint AudioDeviceInfo::TYPE_HDMI_ARC()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HDMI_ARC"
		);
	}
	jint AudioDeviceInfo::TYPE_HDMI_EARC()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HDMI_EARC"
		);
	}
	jint AudioDeviceInfo::TYPE_HEARING_AID()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HEARING_AID"
		);
	}
	jint AudioDeviceInfo::TYPE_IP()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_IP"
		);
	}
	jint AudioDeviceInfo::TYPE_LINE_ANALOG()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_LINE_ANALOG"
		);
	}
	jint AudioDeviceInfo::TYPE_LINE_DIGITAL()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_LINE_DIGITAL"
		);
	}
	jint AudioDeviceInfo::TYPE_REMOTE_SUBMIX()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_REMOTE_SUBMIX"
		);
	}
	jint AudioDeviceInfo::TYPE_TELEPHONY()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_TELEPHONY"
		);
	}
	jint AudioDeviceInfo::TYPE_TV_TUNER()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_TV_TUNER"
		);
	}
	jint AudioDeviceInfo::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_UNKNOWN"
		);
	}
	jint AudioDeviceInfo::TYPE_USB_ACCESSORY()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_USB_ACCESSORY"
		);
	}
	jint AudioDeviceInfo::TYPE_USB_DEVICE()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_USB_DEVICE"
		);
	}
	jint AudioDeviceInfo::TYPE_USB_HEADSET()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_USB_HEADSET"
		);
	}
	jint AudioDeviceInfo::TYPE_WIRED_HEADPHONES()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_WIRED_HEADPHONES"
		);
	}
	jint AudioDeviceInfo::TYPE_WIRED_HEADSET()
	{
		return getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_WIRED_HEADSET"
		);
	}
	
	// QAndroidJniObject forward
	AudioDeviceInfo::AudioDeviceInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AudioDeviceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString AudioDeviceInfo::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		);
	}
	JObject AudioDeviceInfo::getAudioDescriptors() const
	{
		return callObjectMethod(
			"getAudioDescriptors",
			"()Ljava/util/List;"
		);
	}
	JObject AudioDeviceInfo::getAudioProfiles() const
	{
		return callObjectMethod(
			"getAudioProfiles",
			"()Ljava/util/List;"
		);
	}
	JIntArray AudioDeviceInfo::getChannelCounts() const
	{
		return callObjectMethod(
			"getChannelCounts",
			"()[I"
		);
	}
	JIntArray AudioDeviceInfo::getChannelIndexMasks() const
	{
		return callObjectMethod(
			"getChannelIndexMasks",
			"()[I"
		);
	}
	JIntArray AudioDeviceInfo::getChannelMasks() const
	{
		return callObjectMethod(
			"getChannelMasks",
			"()[I"
		);
	}
	JIntArray AudioDeviceInfo::getEncapsulationMetadataTypes() const
	{
		return callObjectMethod(
			"getEncapsulationMetadataTypes",
			"()[I"
		);
	}
	JIntArray AudioDeviceInfo::getEncapsulationModes() const
	{
		return callObjectMethod(
			"getEncapsulationModes",
			"()[I"
		);
	}
	JIntArray AudioDeviceInfo::getEncodings() const
	{
		return callObjectMethod(
			"getEncodings",
			"()[I"
		);
	}
	jint AudioDeviceInfo::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	JString AudioDeviceInfo::getProductName() const
	{
		return callObjectMethod(
			"getProductName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JIntArray AudioDeviceInfo::getSampleRates() const
	{
		return callObjectMethod(
			"getSampleRates",
			"()[I"
		);
	}
	jint AudioDeviceInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint AudioDeviceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AudioDeviceInfo::isSink() const
	{
		return callMethod<jboolean>(
			"isSink",
			"()Z"
		);
	}
	jboolean AudioDeviceInfo::isSource() const
	{
		return callMethod<jboolean>(
			"isSource",
			"()Z"
		);
	}
} // namespace android::media

