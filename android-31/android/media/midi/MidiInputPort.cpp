#include "../../../JByteArray.hpp"
#include "./MidiInputPort.hpp"

namespace android::media::midi
{
	// Fields
	
	// QJniObject forward
	MidiInputPort::MidiInputPort(QJniObject obj) : android::media::midi::MidiReceiver(obj) {}
	
	// Constructors
	
	// Methods
	void MidiInputPort::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint MidiInputPort::getPortNumber() const
	{
		return callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	void MidiInputPort::onFlush() const
	{
		callMethod<void>(
			"onFlush",
			"()V"
		);
	}
	void MidiInputPort::onSend(JByteArray arg0, jint arg1, jint arg2, jlong arg3) const
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

