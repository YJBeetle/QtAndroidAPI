#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MidiReceiver.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}

namespace __jni_impl::android::media::midi
{
	class MidiInputPort : public __jni_impl::android::media::midi::MidiReceiver
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		jint getPortNumber();
		void onFlush();
		void onSend(jbyteArray arg0, jint arg1, jint arg2, jlong arg3);
	};
} // namespace __jni_impl::android::media::midi

#include "../../../java/io/FileDescriptor.hpp"

namespace __jni_impl::android::media::midi
{
	// Fields
	
	// Constructors
	void MidiInputPort::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiInputPort",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiInputPort : public __jni_impl::android::media::midi::MidiInputPort
	{
	public:
		MidiInputPort(QAndroidJniObject obj) { __thiz = obj; }
		MidiInputPort()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

