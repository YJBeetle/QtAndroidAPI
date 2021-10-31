#include "./MidiReceiver.hpp"

namespace android::media::midi
{
	// Fields
	
	MidiReceiver::MidiReceiver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MidiReceiver::MidiReceiver()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiReceiver",
			"()V"
		);
	}
	MidiReceiver::MidiReceiver(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiReceiver",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void MidiReceiver::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	jint MidiReceiver::getMaxMessageSize()
	{
		return __thiz.callMethod<jint>(
			"getMaxMessageSize",
			"()I"
		);
	}
	void MidiReceiver::onFlush()
	{
		__thiz.callMethod<void>(
			"onFlush",
			"()V"
		);
	}
	void MidiReceiver::onSend(jbyteArray arg0, jint arg1, jint arg2, jlong arg3)
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
	void MidiReceiver::send(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"send",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MidiReceiver::send(jbyteArray arg0, jint arg1, jint arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"send",
			"([BIIJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media::midi

