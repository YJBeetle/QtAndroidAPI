#include "./MidiDevice.hpp"
#include "./MidiInputPort.hpp"
#include "./MidiDevice_MidiConnection.hpp"

namespace android::media::midi
{
	// Fields
	
	// Constructors
	
	// Methods
	void MidiDevice_MidiConnection::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::media::midi

