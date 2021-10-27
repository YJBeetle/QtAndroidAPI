#include "./MidiDeviceInfo.hpp"
#include "./MidiDeviceStatus.hpp"
#include "./MidiManager_DeviceCallback.hpp"

namespace android::media::midi
{
	// Fields
	
	MidiManager_DeviceCallback::MidiManager_DeviceCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MidiManager_DeviceCallback::MidiManager_DeviceCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiManager$DeviceCallback",
			"()V"
		);
	}
	
	// Methods
	void MidiManager_DeviceCallback::onDeviceAdded(android::media::midi::MidiDeviceInfo arg0)
	{
		__thiz.callMethod<void>(
			"onDeviceAdded",
			"(Landroid/media/midi/MidiDeviceInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiManager_DeviceCallback::onDeviceRemoved(android::media::midi::MidiDeviceInfo arg0)
	{
		__thiz.callMethod<void>(
			"onDeviceRemoved",
			"(Landroid/media/midi/MidiDeviceInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MidiManager_DeviceCallback::onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0)
	{
		__thiz.callMethod<void>(
			"onDeviceStatusChanged",
			"(Landroid/media/midi/MidiDeviceStatus;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::midi

