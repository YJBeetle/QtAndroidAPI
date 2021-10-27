#include "../../content/Intent.hpp"
#include "./MidiDeviceInfo.hpp"
#include "./MidiDeviceStatus.hpp"
#include "./MidiDeviceService.hpp"

namespace android::media::midi
{
	// Fields
	jstring MidiDeviceService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	MidiDeviceService::MidiDeviceService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MidiDeviceService::MidiDeviceService()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiDeviceService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MidiDeviceService::getDeviceInfo()
	{
		return __thiz.callObjectMethod(
			"getDeviceInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	jarray MidiDeviceService::getOutputPortReceivers()
	{
		return __thiz.callObjectMethod(
			"getOutputPortReceivers",
			"()[Landroid/media/midi/MidiReceiver;"
		).object<jarray>();
	}
	QAndroidJniObject MidiDeviceService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void MidiDeviceService::onClose()
	{
		__thiz.callMethod<void>(
			"onClose",
			"()V"
		);
	}
	void MidiDeviceService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void MidiDeviceService::onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0)
	{
		__thiz.callMethod<void>(
			"onDeviceStatusChanged",
			"(Landroid/media/midi/MidiDeviceStatus;)V",
			arg0.__jniObject().object()
		);
	}
	jarray MidiDeviceService::onGetInputPortReceivers()
	{
		return __thiz.callObjectMethod(
			"onGetInputPortReceivers",
			"()[Landroid/media/midi/MidiReceiver;"
		).object<jarray>();
	}
} // namespace android::media::midi

