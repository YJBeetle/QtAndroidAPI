#pragma once

#ifndef ANDROID_MEDIA_MIDI_MIDIRECEIVER
#define ANDROID_MEDIA_MIDI_MIDIRECEIVER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::midi
{
	class MidiReceiver : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		void flush();
		void onSend(jbyteArray arg0, jint arg1, jint arg2, jlong arg3);
		void onFlush();
		jint getMaxMessageSize();
		void send(jbyteArray arg0, jint arg1, jint arg2);
		void send(jbyteArray arg0, jint arg1, jint arg2, jlong arg3);
	};
} // namespace __jni_impl::android::media::midi


namespace __jni_impl::android::media::midi
{
	// Fields
	
	// Constructors
	void MidiReceiver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiReceiver",
			"()V");
	}
	void MidiReceiver::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiReceiver",
			"(I)V",
			arg0);
	}
	
	// Methods
	void MidiReceiver::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void MidiReceiver::onSend(jbyteArray arg0, jint arg1, jint arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"onSend",
			"([BIIJ)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void MidiReceiver::onFlush()
	{
		__thiz.callMethod<void>(
			"onFlush",
			"()V");
	}
	jint MidiReceiver::getMaxMessageSize()
	{
		return __thiz.callMethod<jint>(
			"getMaxMessageSize",
			"()I");
	}
	void MidiReceiver::send(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"send",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
	void MidiReceiver::send(jbyteArray arg0, jint arg1, jint arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"send",
			"([BIIJ)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiReceiver : public __jni_impl::android::media::midi::MidiReceiver
	{
	public:
		MidiReceiver(QAndroidJniObject obj) { __thiz = obj; }
		MidiReceiver()
		{
			__constructor();
		}
		MidiReceiver(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::midi

#endif // ANDROID_MEDIA_MIDI_MIDIRECEIVER

