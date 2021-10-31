#include "./MidiDevice.hpp"
#include "./MidiInputPort.hpp"
#include "./MidiDevice_MidiConnection.hpp"

namespace android::media::midi
{
	// Fields
	
	// QJniObject forward
	MidiDevice_MidiConnection::MidiDevice_MidiConnection(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void MidiDevice_MidiConnection::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::media::midi

