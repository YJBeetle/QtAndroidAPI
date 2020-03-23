#pragma once

#ifndef ANDROID_MEDIA_MIDI_MIDIDEVICE_MIDICONNECTION
#define ANDROID_MEDIA_MIDI_MIDIDEVICE_MIDICONNECTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::midi
{
	class MidiDevice;
}
namespace __jni_impl::android::media::midi
{
	class MidiInputPort;
}

namespace __jni_impl::android::media::midi
{
	class MidiDevice_MidiConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
	};
} // namespace __jni_impl::android::media::midi

#include "MidiDevice.hpp"
#include "MidiInputPort.hpp"

namespace __jni_impl::android::media::midi
{
	// Fields
	
	// Constructors
	void MidiDevice_MidiConnection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiDevice$MidiConnection",
			"(V)V");
	}
	
	// Methods
	void MidiDevice_MidiConnection::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiDevice_MidiConnection : public __jni_impl::android::media::midi::MidiDevice_MidiConnection
	{
	public:
		MidiDevice_MidiConnection(QAndroidJniObject obj) { __thiz = obj; }
		MidiDevice_MidiConnection()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

#endif // ANDROID_MEDIA_MIDI_MIDIDEVICE_MIDICONNECTION

