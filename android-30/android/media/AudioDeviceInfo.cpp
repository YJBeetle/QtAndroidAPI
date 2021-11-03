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
	
	// QJniObject forward
	AudioDeviceInfo::AudioDeviceInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AudioDeviceInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AudioDeviceInfo::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jintArray AudioDeviceInfo::getChannelCounts()
	{
		return callObjectMethod(
			"getChannelCounts",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioDeviceInfo::getChannelIndexMasks()
	{
		return callObjectMethod(
			"getChannelIndexMasks",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioDeviceInfo::getChannelMasks()
	{
		return callObjectMethod(
			"getChannelMasks",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioDeviceInfo::getEncapsulationMetadataTypes()
	{
		return callObjectMethod(
			"getEncapsulationMetadataTypes",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioDeviceInfo::getEncapsulationModes()
	{
		return callObjectMethod(
			"getEncapsulationModes",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioDeviceInfo::getEncodings()
	{
		return callObjectMethod(
			"getEncodings",
			"()[I"
		).object<jintArray>();
	}
	jint AudioDeviceInfo::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jstring AudioDeviceInfo::getProductName()
	{
		return callObjectMethod(
			"getProductName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jintArray AudioDeviceInfo::getSampleRates()
	{
		return callObjectMethod(
			"getSampleRates",
			"()[I"
		).object<jintArray>();
	}
	jint AudioDeviceInfo::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint AudioDeviceInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AudioDeviceInfo::isSink()
	{
		return callMethod<jboolean>(
			"isSink",
			"()Z"
		);
	}
	jboolean AudioDeviceInfo::isSource()
	{
		return callMethod<jboolean>(
			"isSource",
			"()Z"
		);
	}
} // namespace android::media

