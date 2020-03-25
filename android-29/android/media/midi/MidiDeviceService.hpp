#pragma once

#ifndef ANDROID_MEDIA_MIDI_MIDIDEVICESERVICE
#define ANDROID_MEDIA_MIDI_MIDIDEVICESERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::media::midi
{
	class MidiDeviceStatus;
}
namespace __jni_impl::android::media::midi
{
	class MidiDeviceInfo;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::media::midi
{
	class MidiDeviceService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onClose();
		void onDeviceStatusChanged(__jni_impl::android::media::midi::MidiDeviceStatus arg0);
		QAndroidJniObject getDeviceInfo();
		QAndroidJniObject onGetInputPortReceivers();
		QAndroidJniObject getOutputPortReceivers();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onCreate();
	};
} // namespace __jni_impl::android::media::midi

#include "MidiDeviceStatus.hpp"
#include "MidiDeviceInfo.hpp"
#include "../../content/Intent.hpp"

namespace __jni_impl::android::media::midi
{
	// Fields
	QAndroidJniObject MidiDeviceService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void MidiDeviceService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiDeviceService",
			"()V");
	}
	
	// Methods
	void MidiDeviceService::onClose()
	{
		__thiz.callMethod<void>(
			"onClose",
			"()V");
	}
	void MidiDeviceService::onDeviceStatusChanged(__jni_impl::android::media::midi::MidiDeviceStatus arg0)
	{
		__thiz.callMethod<void>(
			"onDeviceStatusChanged",
			"(Landroid/media/midi/MidiDeviceStatus;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MidiDeviceService::getDeviceInfo()
	{
		return __thiz.callObjectMethod(
			"getDeviceInfo",
			"()Landroid/media/midi/MidiDeviceInfo;");
	}
	QAndroidJniObject MidiDeviceService::onGetInputPortReceivers()
	{
		return __thiz.callObjectMethod(
			"onGetInputPortReceivers",
			"()[Landroid/media/midi/MidiReceiver;");
	}
	QAndroidJniObject MidiDeviceService::getOutputPortReceivers()
	{
		return __thiz.callObjectMethod(
			"getOutputPortReceivers",
			"()[Landroid/media/midi/MidiReceiver;");
	}
	QAndroidJniObject MidiDeviceService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	void MidiDeviceService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V");
	}
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiDeviceService : public __jni_impl::android::media::midi::MidiDeviceService
	{
	public:
		MidiDeviceService(QAndroidJniObject obj) { __thiz = obj; }
		MidiDeviceService()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

#endif // ANDROID_MEDIA_MIDI_MIDIDEVICESERVICE

