#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::midi
{
	class MidiDeviceInfo;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media::midi
{
	class MidiDeviceStatus : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getDeviceInfo();
		jint getOutputPortOpenCount(jint arg0);
		jboolean isInputPortOpen(jint arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media::midi

#include "./MidiDeviceInfo.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::media::midi
{
	// Fields
	QAndroidJniObject MidiDeviceStatus::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.midi.MidiDeviceStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void MidiDeviceStatus::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiDeviceStatus",
			"(V)V");
	}
	
	// Methods
	jint MidiDeviceStatus::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject MidiDeviceStatus::getDeviceInfo()
	{
		return __thiz.callObjectMethod(
			"getDeviceInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	jint MidiDeviceStatus::getOutputPortOpenCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOutputPortOpenCount",
			"(I)I",
			arg0
		);
	}
	jboolean MidiDeviceStatus::isInputPortOpen(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isInputPortOpen",
			"(I)Z",
			arg0
		);
	}
	jstring MidiDeviceStatus::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MidiDeviceStatus::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class MidiDeviceStatus : public __jni_impl::android::media::midi::MidiDeviceStatus
	{
	public:
		MidiDeviceStatus(QAndroidJniObject obj) { __thiz = obj; }
		MidiDeviceStatus()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

