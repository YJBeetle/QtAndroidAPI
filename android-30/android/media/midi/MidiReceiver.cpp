#include "../../../JByteArray.hpp"
#include "./MidiReceiver.hpp"

namespace android::media::midi
{
	// Fields
	
	// QJniObject forward
	MidiReceiver::MidiReceiver(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MidiReceiver::MidiReceiver()
		: JObject(
			"android.media.midi.MidiReceiver",
			"()V"
		) {}
	MidiReceiver::MidiReceiver(jint arg0)
		: JObject(
			"android.media.midi.MidiReceiver",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void MidiReceiver::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	jint MidiReceiver::getMaxMessageSize()
	{
		return callMethod<jint>(
			"getMaxMessageSize",
			"()I"
		);
	}
	void MidiReceiver::onFlush()
	{
		callMethod<void>(
			"onFlush",
			"()V"
		);
	}
	void MidiReceiver::onSend(JByteArray arg0, jint arg1, jint arg2, jlong arg3)
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
	void MidiReceiver::send(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"send",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void MidiReceiver::send(JByteArray arg0, jint arg1, jint arg2, jlong arg3)
	{
		callMethod<void>(
			"send",
			"([BIIJ)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media::midi

