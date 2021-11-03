#include "./MidiDevice.hpp"
#include "./MidiDevice_MidiConnection.hpp"

namespace android::media::midi
{
	// Fields
	
	// QJniObject forward
	MidiDevice_MidiConnection::MidiDevice_MidiConnection(QJniObject obj) : JObject(obj) {}
	
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

