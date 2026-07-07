#pragma once

#include "../../../JString.hpp"
#include "./MidiDeviceInfo_PortInfo.def.hpp"

namespace android::media::midi
{
	// Fields
	inline jint MidiDeviceInfo_PortInfo::TYPE_INPUT()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo$PortInfo",
			"TYPE_INPUT"
		);
	}
	inline jint MidiDeviceInfo_PortInfo::TYPE_OUTPUT()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo$PortInfo",
			"TYPE_OUTPUT"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString MidiDeviceInfo_PortInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint MidiDeviceInfo_PortInfo::getPortNumber() const
	{
		return callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	inline jint MidiDeviceInfo_PortInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::media::midi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::midi;
#endif
