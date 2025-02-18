#pragma once

#include "../../../JByteArray.hpp"
#include "./MidiReceiver.def.hpp"

namespace android::media::midi
{
	// Fields
	
	// Constructors
	inline MidiReceiver::MidiReceiver()
		: JObject(
			"android.media.midi.MidiReceiver",
			"()V"
		) {}
	inline MidiReceiver::MidiReceiver(jint arg0)
		: JObject(
			"android.media.midi.MidiReceiver",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void MidiReceiver::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline jint MidiReceiver::getMaxMessageSize() const
	{
		return callMethod<jint>(
			"getMaxMessageSize",
			"()I"
		);
	}
	inline void MidiReceiver::onFlush() const
	{
		callMethod<void>(
			"onFlush",
			"()V"
		);
	}
	inline void MidiReceiver::onSend(JByteArray arg0, jint arg1, jint arg2, jlong arg3) const
	{
		callMethod<void>(
			"onSend",
			"([BIIJ)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void MidiReceiver::send(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"send",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void MidiReceiver::send(JByteArray arg0, jint arg1, jint arg2, jlong arg3) const
	{
		callMethod<void>(
			"send",
			"([BIIJ)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media::midi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::midi;
#endif
