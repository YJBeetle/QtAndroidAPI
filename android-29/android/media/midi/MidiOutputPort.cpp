#include "./MidiReceiver.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "./MidiOutputPort.hpp"

namespace android::media::midi
{
	// Fields
	
	MidiOutputPort::MidiOutputPort(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MidiOutputPort::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint MidiOutputPort::getPortNumber()
	{
		return __thiz.callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	void MidiOutputPort::onConnect(android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"onConnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiOutputPort::onDisconnect(android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::midi

