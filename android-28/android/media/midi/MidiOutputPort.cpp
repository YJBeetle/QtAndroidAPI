#include "./MidiReceiver.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "./MidiOutputPort.hpp"

namespace android::media::midi
{
	// Fields
	
	// QJniObject forward
	MidiOutputPort::MidiOutputPort(QJniObject obj) : android::media::midi::MidiSender(obj) {}
	
	// Constructors
	
	// Methods
	void MidiOutputPort::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint MidiOutputPort::getPortNumber() const
	{
		return callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	void MidiOutputPort::onConnect(android::media::midi::MidiReceiver arg0) const
	{
		callMethod<void>(
			"onConnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
	void MidiOutputPort::onDisconnect(android::media::midi::MidiReceiver arg0) const
	{
		callMethod<void>(
			"onDisconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
} // namespace android::media::midi

