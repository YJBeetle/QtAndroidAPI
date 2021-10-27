#include "./MidiReceiver.hpp"
#include "./MidiSender.hpp"

namespace android::media::midi
{
	// Fields
	
	MidiSender::MidiSender(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MidiSender::MidiSender()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiSender",
			"()V"
		);
	}
	
	// Methods
	void MidiSender::connect(android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiSender::disconnect(android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"disconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiSender::onConnect(android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"onConnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiSender::onDisconnect(android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::midi

