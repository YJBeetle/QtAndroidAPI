#pragma once

#include "./MidiDevice_MidiConnection.def.hpp"
#include "./MidiDeviceInfo.def.hpp"
#include "./MidiInputPort.def.hpp"
#include "./MidiOutputPort.def.hpp"
#include "../../../JString.hpp"
#include "./MidiDevice.def.hpp"

namespace android::media::midi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MidiDevice::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::media::midi::MidiDevice_MidiConnection MidiDevice::connectPorts(android::media::midi::MidiInputPort arg0, jint arg1) const
	{
		return callObjectMethod(
			"connectPorts",
			"(Landroid/media/midi/MidiInputPort;I)Landroid/media/midi/MidiDevice$MidiConnection;",
			arg0.object(),
			arg1
		);
	}
	inline android::media::midi::MidiDeviceInfo MidiDevice::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	inline android::media::midi::MidiInputPort MidiDevice::openInputPort(jint arg0) const
	{
		return callObjectMethod(
			"openInputPort",
			"(I)Landroid/media/midi/MidiInputPort;",
			arg0
		);
	}
	inline android::media::midi::MidiOutputPort MidiDevice::openOutputPort(jint arg0) const
	{
		return callObjectMethod(
			"openOutputPort",
			"(I)Landroid/media/midi/MidiOutputPort;",
			arg0
		);
	}
	inline JString MidiDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::midi

// Base class headers

