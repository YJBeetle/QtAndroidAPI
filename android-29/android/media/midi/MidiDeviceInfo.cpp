#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./MidiDeviceInfo.hpp"

namespace android::media::midi
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
	
	MidiDeviceInfo::MidiDeviceInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	void MidiDeviceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media::midi

