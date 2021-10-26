#pragma once

#ifndef ANDROID_MEDIA_MIDI_MIDISENDER
#define ANDROID_MEDIA_MIDI_MIDISENDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::midi
{
	class MidiReceiver;
}

namespace __jni_impl::android::media::midi
{
	class MidiSender : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void connect(__jni_impl::android::media::midi::MidiReceiver arg0);
		void onDisconnect(__jni_impl::android::media::midi::MidiReceiver arg0);
		void disconnect(__jni_impl::android::media::midi::MidiReceiver arg0);
		void onConnect(__jni_impl::android::media::midi::MidiReceiver arg0);
	};
} // namespace __jni_impl::android::media::midi

#include "MidiReceiver.hpp"

namespace __jni_impl::android::media::midi
{
	// Fields
	
	// Constructors
	void MidiSender::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiSender",
			"()V"
		);
	}
	
	// Methods
	void MidiSender::connect(__jni_impl::android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiSender::onDisconnect(__jni_impl::android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiSender::disconnect(__jni_impl::android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"disconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiSender::onConnect(__jni_impl::android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"onConnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiSender : public __jni_impl::android::media::midi::MidiSender
	{
	public:
		MidiSender(QAndroidJniObject obj) { __thiz = obj; }
		MidiSender()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

#endif // ANDROID_MEDIA_MIDI_MIDISENDER

