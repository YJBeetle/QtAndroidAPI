#pragma once

#include "./MidiReceiver.def.hpp"
#include "./MidiOutputPort.def.hpp"

namespace android::media::midi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MidiOutputPort::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint MidiOutputPort::getPortNumber() const
	{
		return callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	inline void MidiOutputPort::onConnect(android::media::midi::MidiReceiver arg0) const
	{
		callMethod<void>(
			"onConnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
	inline void MidiOutputPort::onDisconnect(android::media::midi::MidiReceiver arg0) const
	{
		callMethod<void>(
			"onDisconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
} // namespace android::media::midi

// Base class headers
#include "./MidiSender.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::midi;
#endif
