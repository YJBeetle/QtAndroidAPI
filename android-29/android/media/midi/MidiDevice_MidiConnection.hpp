#pragma once

#include "./MidiDevice.def.hpp"
#include "./MidiInputPort.def.hpp"
#include "./MidiDevice_MidiConnection.def.hpp"

namespace android::media::midi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MidiDevice_MidiConnection::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::media::midi

// Base class headers

