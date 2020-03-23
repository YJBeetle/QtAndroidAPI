#pragma once

#ifndef ANDROID_HARDWARE_SENSORDIRECTCHANNEL
#define ANDROID_HARDWARE_SENSORDIRECTCHANNEL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class SensorManager;
}
namespace __jni_impl::android::hardware
{
	class Sensor;
}

namespace __jni_impl::android::hardware
{
	class SensorDirectChannel : public __JniBaseClass
	{
	public:
		// Fields
		static jint RATE_FAST();
		static jint RATE_NORMAL();
		static jint RATE_STOP();
		static jint RATE_VERY_FAST();
		static jint TYPE_HARDWARE_BUFFER();
		static jint TYPE_MEMORY_FILE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isOpen();
		void close();
		jint configure(__jni_impl::android::hardware::Sensor arg0, jint arg1);
	};
} // namespace __jni_impl::android::hardware

#include "SensorManager.hpp"
#include "Sensor.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	jint SensorDirectChannel::RATE_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_FAST");
	}
	jint SensorDirectChannel::RATE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_NORMAL");
	}
	jint SensorDirectChannel::RATE_STOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_STOP");
	}
	jint SensorDirectChannel::RATE_VERY_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_VERY_FAST");
	}
	jint SensorDirectChannel::TYPE_HARDWARE_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"TYPE_HARDWARE_BUFFER");
	}
	jint SensorDirectChannel::TYPE_MEMORY_FILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"TYPE_MEMORY_FILE");
	}
	
	// Constructors
	void SensorDirectChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.SensorDirectChannel",
			"(V)V");
	}
	
	// Methods
	jboolean SensorDirectChannel::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z");
	}
	void SensorDirectChannel::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jint SensorDirectChannel::configure(__jni_impl::android::hardware::Sensor arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"configure",
			"(Landroid/hardware/Sensor;I)I",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class SensorDirectChannel : public __jni_impl::android::hardware::SensorDirectChannel
	{
	public:
		SensorDirectChannel(QAndroidJniObject obj) { __thiz = obj; }
		SensorDirectChannel()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_SENSORDIRECTCHANNEL

