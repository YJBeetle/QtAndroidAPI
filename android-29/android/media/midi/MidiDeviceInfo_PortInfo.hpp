#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::midi
{
	class MidiDeviceInfo_PortInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_INPUT();
		static jint TYPE_OUTPUT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		jint getPortNumber();
		jint getType();
	};
} // namespace __jni_impl::android::media::midi


namespace __jni_impl::android::media::midi
{
	// Fields
	jint MidiDeviceInfo_PortInfo::TYPE_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo$PortInfo",
			"TYPE_INPUT"
		);
	}
	jint MidiDeviceInfo_PortInfo::TYPE_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.midi.MidiDeviceInfo$PortInfo",
			"TYPE_OUTPUT"
		);
	}
	
	// Constructors
	void MidiDeviceInfo_PortInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiDeviceInfo$PortInfo",
			"(V)V");
	}
	
	// Methods
	jstring MidiDeviceInfo_PortInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MidiDeviceInfo_PortInfo::getPortNumber()
	{
		return __thiz.callMethod<jint>(
			"getPortNumber",
			"()I"
		);
	}
	jint MidiDeviceInfo_PortInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiDeviceInfo_PortInfo : public __jni_impl::android::media::midi::MidiDeviceInfo_PortInfo
	{
	public:
		MidiDeviceInfo_PortInfo(QAndroidJniObject obj) { __thiz = obj; }
		MidiDeviceInfo_PortInfo()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

