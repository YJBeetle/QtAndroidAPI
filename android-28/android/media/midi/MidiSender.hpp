#pragma once

#include "./MidiReceiver.def.hpp"
#include "./MidiSender.def.hpp"

namespace android::media::midi
{
	// Fields
	
	// Constructors
	inline MidiSender::MidiSender()
		: JObject(
			"android.media.midi.MidiSender",
			"()V"
		) {}
	
	// Methods
	inline void MidiSender::connect(android::media::midi::MidiReceiver arg0) const
	{
		callMethod<void>(
			"connect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
	inline void MidiSender::disconnect(android::media::midi::MidiReceiver arg0) const
	{
		callMethod<void>(
			"disconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
	inline void MidiSender::onConnect(android::media::midi::MidiReceiver arg0) const
	{
		callMethod<void>(
			"onConnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
	inline void MidiSender::onDisconnect(android::media::midi::MidiReceiver arg0) const
	{
		callMethod<void>(
			"onDisconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
} // namespace android::media::midi

// Base class headers

