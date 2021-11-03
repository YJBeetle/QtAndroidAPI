#include "./MidiDevice.hpp"
#include "./MidiInputPort.hpp"
#include "./MidiDevice_MidiConnection.hpp"

namespace android::media::midi
{
	// Fields
	
	// QAndroidJniObject forward
	MidiDevice_MidiConnection::MidiDevice_MidiConnection(QAndroidJniObject obj) : JObject(obj) {}
	
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

