#include "./MidiDevice.hpp"
#include "./MidiInputPort.hpp"
#include "./MidiDevice_MidiConnection.hpp"

namespace android::media::midi
{
	// Fields
	
	MidiDevice_MidiConnection::MidiDevice_MidiConnection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MidiDevice_MidiConnection::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::media::midi

