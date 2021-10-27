#include "./MidiDeviceInfo_PortInfo.hpp"

namespace android::media::midi
{
	// Fields
	jint MidiDeviceInfo_PortInfo::TYPE_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo$PortInfo",
			"TYPE_INPUT"
		);
	}
	jint MidiDeviceInfo_PortInfo::TYPE_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo$PortInfo",
			"TYPE_OUTPUT"
		);
	}
	
	MidiDeviceInfo_PortInfo::MidiDeviceInfo_PortInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring MidiDeviceInfo_PortInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MidiDeviceInfo_PortInfo::getPortNumber()
	{
		return __thiz.callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	jint MidiDeviceInfo_PortInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::media::midi

