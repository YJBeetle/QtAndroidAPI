#include "./MidiInputPort.hpp"

namespace android::media::midi
{
	// Fields
	
	// QAndroidJniObject forward
	MidiInputPort::MidiInputPort(QAndroidJniObject obj) : android::media::midi::MidiReceiver(obj) {}
	
	// Constructors
	
	// Methods
	void MidiInputPort::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint MidiInputPort::getPortNumber()
	{
		return callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	void MidiInputPort::onFlush()
	{
		callMethod<void>(
			"onFlush",
			"()V"
		);
	}
	void MidiInputPort::onSend(jbyteArray arg0, jint arg1, jint arg2, jlong arg3)
	{
		callMethod<void>(
			"onSend",
			"([BIIJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media::midi

