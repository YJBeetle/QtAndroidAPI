#pragma once

#ifndef ANDROID_MEDIA_MIDI_MIDIOUTPUTPORT
#define ANDROID_MEDIA_MIDI_MIDIOUTPUTPORT

#include "../../../__JniBaseClass.hpp"
#include "MidiSender.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::android::media::midi
{
	class MidiReceiver;
}

namespace __jni_impl::android::media::midi
{
	class MidiOutputPort : public __jni_impl::android::media::midi::MidiSender
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void onDisconnect(__jni_impl::android::media::midi::MidiReceiver arg0);
		void onConnect(__jni_impl::android::media::midi::MidiReceiver arg0);
		jint getPortNumber();
	};
} // namespace __jni_impl::android::media::midi

#include "../../../java/io/FileDescriptor.hpp"
#include "MidiReceiver.hpp"

namespace __jni_impl::android::media::midi
{
	// Fields
	
	// Constructors
	void MidiOutputPort::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiOutputPort",
			"(V)V");
	}
	
	// Methods
	void MidiOutputPort::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MidiOutputPort::onDisconnect(__jni_impl::android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiOutputPort::onConnect(__jni_impl::android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"onConnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	jint MidiOutputPort::getPortNumber()
	{
		return __thiz.callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiOutputPort : public __jni_impl::android::media::midi::MidiOutputPort
	{
	public:
		MidiOutputPort(QAndroidJniObject obj) { __thiz = obj; }
		MidiOutputPort()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

#endif // ANDROID_MEDIA_MIDI_MIDIOUTPUTPORT

