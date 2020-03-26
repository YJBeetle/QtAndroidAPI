#pragma once

#ifndef ANDROID_MEDIA_MIDI_MIDIMANAGER
#define ANDROID_MEDIA_MIDI_MIDIMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::midi
{
	class MidiManager_DeviceCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}
namespace __jni_impl::android::media::midi
{
	class MidiDeviceInfo;
}

namespace __jni_impl::android::media::midi
{
	class MidiManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void registerDeviceCallback(__jni_impl::android::media::midi::MidiManager_DeviceCallback arg0, __jni_impl::android::os::Handler arg1);
		void unregisterDeviceCallback(__jni_impl::android::media::midi::MidiManager_DeviceCallback arg0);
		void openBluetoothDevice(__jni_impl::android::bluetooth::BluetoothDevice arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2);
		jarray getDevices();
		void openDevice(__jni_impl::android::media::midi::MidiDeviceInfo arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2);
	};
} // namespace __jni_impl::android::media::midi

#include "MidiManager_DeviceCallback.hpp"
#include "../../os/Handler.hpp"
#include "../../bluetooth/BluetoothDevice.hpp"
#include "MidiDeviceInfo.hpp"

namespace __jni_impl::android::media::midi
{
	// Fields
	
	// Constructors
	void MidiManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiManager",
			"(V)V");
	}
	
	// Methods
	void MidiManager::registerDeviceCallback(__jni_impl::android::media::midi::MidiManager_DeviceCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerDeviceCallback",
			"(Landroid/media/midi/MidiManager$DeviceCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MidiManager::unregisterDeviceCallback(__jni_impl::android::media::midi::MidiManager_DeviceCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDeviceCallback",
			"(Landroid/media/midi/MidiManager$DeviceCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiManager::openBluetoothDevice(__jni_impl::android::bluetooth::BluetoothDevice arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"openBluetoothDevice",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/media/midi/MidiManager$OnDeviceOpenedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jarray MidiManager::getDevices()
	{
		return __thiz.callObjectMethod(
			"getDevices",
			"()[Landroid/media/midi/MidiDeviceInfo;"
		).object<jarray>();
	}
	void MidiManager::openDevice(__jni_impl::android::media::midi::MidiDeviceInfo arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"openDevice",
			"(Landroid/media/midi/MidiDeviceInfo;Landroid/media/midi/MidiManager$OnDeviceOpenedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiManager : public __jni_impl::android::media::midi::MidiManager
	{
	public:
		MidiManager(QAndroidJniObject obj) { __thiz = obj; }
		MidiManager()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

#endif // ANDROID_MEDIA_MIDI_MIDIMANAGER

