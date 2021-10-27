#pragma once

#ifndef ANDROID_MEDIA_MIDI_MIDIDEVICEINFO
#define ANDROID_MEDIA_MIDI_MIDIDEVICEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media::midi
{
	class MidiDeviceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring PROPERTY_BLUETOOTH_DEVICE();
		static jstring PROPERTY_MANUFACTURER();
		static jstring PROPERTY_NAME();
		static jstring PROPERTY_PRODUCT();
		static jstring PROPERTY_SERIAL_NUMBER();
		static jstring PROPERTY_USB_DEVICE();
		static jstring PROPERTY_VERSION();
		static jint TYPE_BLUETOOTH();
		static jint TYPE_USB();
		static jint TYPE_VIRTUAL();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getId();
		jint getInputPortCount();
		jint getOutputPortCount();
		jarray getPorts();
		QAndroidJniObject getProperties();
		jint getType();
		jint hashCode();
		jboolean isPrivate();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media::midi

#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::media::midi
{
	// Fields
	QAndroidJniObject MidiDeviceInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring MidiDeviceInfo::PROPERTY_BLUETOOTH_DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_BLUETOOTH_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_MANUFACTURER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_MANUFACTURER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_PRODUCT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_PRODUCT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_SERIAL_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_SERIAL_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_USB_DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_USB_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MidiDeviceInfo::PROPERTY_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceInfo",
			"PROPERTY_VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MidiDeviceInfo::TYPE_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo",
			"TYPE_BLUETOOTH"
		);
	}
	jint MidiDeviceInfo::TYPE_USB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo",
			"TYPE_USB"
		);
	}
	jint MidiDeviceInfo::TYPE_VIRTUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo",
			"TYPE_VIRTUAL"
		);
	}
	
	// Constructors
	void MidiDeviceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiDeviceInfo",
			"(V)V");
	}
	
	// Methods
	jint MidiDeviceInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MidiDeviceInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MidiDeviceInfo::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint MidiDeviceInfo::getInputPortCount()
	{
		return __thiz.callMethod<jint>(
			"getInputPortCount",
			"()I"
		);
	}
	jint MidiDeviceInfo::getOutputPortCount()
	{
		return __thiz.callMethod<jint>(
			"getOutputPortCount",
			"()I"
		);
	}
	jarray MidiDeviceInfo::getPorts()
	{
		return __thiz.callObjectMethod(
			"getPorts",
			"()[Landroid/media/midi/MidiDeviceInfo$PortInfo;"
		).object<jarray>();
	}
	QAndroidJniObject MidiDeviceInfo::getProperties()
	{
		return __thiz.callObjectMethod(
			"getProperties",
			"()Landroid/os/Bundle;"
		);
	}
	jint MidiDeviceInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint MidiDeviceInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MidiDeviceInfo::isPrivate()
	{
		return __thiz.callMethod<jboolean>(
			"isPrivate",
			"()Z"
		);
	}
	jstring MidiDeviceInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MidiDeviceInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiDeviceInfo : public __jni_impl::android::media::midi::MidiDeviceInfo
	{
	public:
		MidiDeviceInfo(QAndroidJniObject obj) { __thiz = obj; }
		MidiDeviceInfo()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

#endif // ANDROID_MEDIA_MIDI_MIDIDEVICEINFO

