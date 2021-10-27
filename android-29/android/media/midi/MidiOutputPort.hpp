#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MidiSender.hpp"

namespace __jni_impl::android::media::midi
{
	class MidiReceiver;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
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
		jint getPortNumber();
		void onConnect(__jni_impl::android::media::midi::MidiReceiver arg0);
		void onDisconnect(__jni_impl::android::media::midi::MidiReceiver arg0);
	};
} // namespace __jni_impl::android::media::midi

#include "./MidiReceiver.hpp"
#include "../../../java/io/FileDescriptor.hpp"

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
	jint MidiOutputPort::getPortNumber()
	{
		return __thiz.callMethod<jint>(
			"getPortNumber",
			"()I"
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
	void MidiOutputPort::onDisconnect(__jni_impl::android::media::midi::MidiReceiver arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.__jniObject().object()
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

