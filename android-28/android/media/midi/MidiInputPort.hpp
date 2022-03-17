#pragma once

#include "../../../JByteArray.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "./MidiInputPort.def.hpp"

namespace android::media::midi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MidiInputPort::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint MidiInputPort::getPortNumber() const
	{
		return callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	inline void MidiInputPort::onFlush() const
	{
		callMethod<void>(
			"onFlush",
			"()V"
		);
	}
	inline void MidiInputPort::onSend(JByteArray arg0, jint arg1, jint arg2, jlong arg3) const
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
} // namespace android::media::midi

// Base class headers
#include "./MidiReceiver.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::midi;
#endif
