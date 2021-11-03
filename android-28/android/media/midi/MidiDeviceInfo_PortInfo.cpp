#include "../../../JString.hpp"
#include "./MidiDeviceInfo_PortInfo.hpp"

namespace android::media::midi
{
	// Fields
	jint MidiDeviceInfo_PortInfo::TYPE_INPUT()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo$PortInfo",
			"TYPE_INPUT"
		);
	}
	jint MidiDeviceInfo_PortInfo::TYPE_OUTPUT()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo$PortInfo",
			"TYPE_OUTPUT"
		);
	}
	
	// QJniObject forward
	MidiDeviceInfo_PortInfo::MidiDeviceInfo_PortInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString MidiDeviceInfo_PortInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint MidiDeviceInfo_PortInfo::getPortNumber()
	{
		return callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	jint MidiDeviceInfo_PortInfo::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::media::midi

