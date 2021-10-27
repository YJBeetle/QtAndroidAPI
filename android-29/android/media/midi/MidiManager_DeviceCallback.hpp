#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::midi
{
	class MidiDeviceInfo;
}
namespace __jni_impl::android::media::midi
{
	class MidiDeviceStatus;
}

namespace __jni_impl::android::media::midi
{
	class MidiManager_DeviceCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onDeviceAdded(__jni_impl::android::media::midi::MidiDeviceInfo arg0);
		void onDeviceRemoved(__jni_impl::android::media::midi::MidiDeviceInfo arg0);
		void onDeviceStatusChanged(__jni_impl::android::media::midi::MidiDeviceStatus arg0);
	};
} // namespace __jni_impl::android::media::midi

#include "./MidiDeviceInfo.hpp"
#include "./MidiDeviceStatus.hpp"

namespace __jni_impl::android::media::midi
{
	// Fields
	
	// Constructors
	void MidiManager_DeviceCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiManager$DeviceCallback",
			"()V"
		);
	}
	
	// Methods
	void MidiManager_DeviceCallback::onDeviceAdded(__jni_impl::android::media::midi::MidiDeviceInfo arg0)
	{
		__thiz.callMethod<void>(
			"onDeviceAdded",
			"(Landroid/media/midi/MidiDeviceInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiManager_DeviceCallback::onDeviceRemoved(__jni_impl::android::media::midi::MidiDeviceInfo arg0)
	{
		__thiz.callMethod<void>(
			"onDeviceRemoved",
			"(Landroid/media/midi/MidiDeviceInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiManager_DeviceCallback::onDeviceStatusChanged(__jni_impl::android::media::midi::MidiDeviceStatus arg0)
	{
		__thiz.callMethod<void>(
			"onDeviceStatusChanged",
			"(Landroid/media/midi/MidiDeviceStatus;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiManager_DeviceCallback : public __jni_impl::android::media::midi::MidiManager_DeviceCallback
	{
	public:
		MidiManager_DeviceCallback(QAndroidJniObject obj) { __thiz = obj; }
		MidiManager_DeviceCallback()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

