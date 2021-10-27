#include "../../../java/io/FileDescriptor.hpp"
#include "./MidiInputPort.hpp"

namespace android::media::midi
{
	// Fields
	
	MidiInputPort::MidiInputPort(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MidiInputPort::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint MidiInputPort::getPortNumber()
	{
		return __thiz.callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	void MidiInputPort::onFlush()
	{
		__thiz.callMethod<void>(
			"onFlush",
			"()V"
		);
	}
	void MidiInputPort::onSend(jbyteArray arg0, jint arg1, jint arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"onSend",
			"([BIIJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media::midi

