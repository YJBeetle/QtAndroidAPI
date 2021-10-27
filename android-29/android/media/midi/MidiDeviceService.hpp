#pragma once

#ifndef ANDROID_MEDIA_MIDI_MIDIDEVICESERVICE
#define ANDROID_MEDIA_MIDI_MIDIDEVICESERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
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
	class MidiDeviceService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getDeviceInfo();
		jarray getOutputPortReceivers();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onClose();
		void onCreate();
		void onDeviceStatusChanged(__jni_impl::android::media::midi::MidiDeviceStatus arg0);
		jarray onGetInputPortReceivers();
	};
} // namespace __jni_impl::android::media::midi

#include "../../content/Intent.hpp"
#include "MidiDeviceInfo.hpp"
#include "MidiDeviceStatus.hpp"

namespace __jni_impl::android::media::midi
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
	
	// Constructors
	void MidiDeviceService::__constructor()
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
	QAndroidJniObject MidiDeviceService::onBind(__jni_impl::android::content::Intent arg0)
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
	void MidiDeviceService::onDeviceStatusChanged(__jni_impl::android::media::midi::MidiDeviceStatus arg0)
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

