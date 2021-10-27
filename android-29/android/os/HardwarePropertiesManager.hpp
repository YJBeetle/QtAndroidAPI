#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class HardwarePropertiesManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEVICE_TEMPERATURE_BATTERY();
		static jint DEVICE_TEMPERATURE_CPU();
		static jint DEVICE_TEMPERATURE_GPU();
		static jint DEVICE_TEMPERATURE_SKIN();
		static jint TEMPERATURE_CURRENT();
		static jint TEMPERATURE_SHUTDOWN();
		static jint TEMPERATURE_THROTTLING();
		static jint TEMPERATURE_THROTTLING_BELOW_VR_MIN();
		static jfloat UNDEFINED_TEMPERATURE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jarray getCpuUsages();
		jfloatArray getDeviceTemperatures(jint arg0, jint arg1);
		jfloatArray getFanSpeeds();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	jint HardwarePropertiesManager::DEVICE_TEMPERATURE_BATTERY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_BATTERY"
		);
	}
	jint HardwarePropertiesManager::DEVICE_TEMPERATURE_CPU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_CPU"
		);
	}
	jint HardwarePropertiesManager::DEVICE_TEMPERATURE_GPU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_GPU"
		);
	}
	jint HardwarePropertiesManager::DEVICE_TEMPERATURE_SKIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_SKIN"
		);
	}
	jint HardwarePropertiesManager::TEMPERATURE_CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_CURRENT"
		);
	}
	jint HardwarePropertiesManager::TEMPERATURE_SHUTDOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_SHUTDOWN"
		);
	}
	jint HardwarePropertiesManager::TEMPERATURE_THROTTLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_THROTTLING"
		);
	}
	jint HardwarePropertiesManager::TEMPERATURE_THROTTLING_BELOW_VR_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_THROTTLING_BELOW_VR_MIN"
		);
	}
	jfloat HardwarePropertiesManager::UNDEFINED_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.os.HardwarePropertiesManager",
			"UNDEFINED_TEMPERATURE"
		);
	}
	
	// Constructors
	void HardwarePropertiesManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.HardwarePropertiesManager",
			"(V)V");
	}
	
	// Methods
	jarray HardwarePropertiesManager::getCpuUsages()
	{
		return __thiz.callObjectMethod(
			"getCpuUsages",
			"()[Landroid/os/CpuUsageInfo;"
		).object<jarray>();
	}
	jfloatArray HardwarePropertiesManager::getDeviceTemperatures(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getDeviceTemperatures",
			"(II)[F",
			arg0,
			arg1
		).object<jfloatArray>();
	}
	jfloatArray HardwarePropertiesManager::getFanSpeeds()
	{
		return __thiz.callObjectMethod(
			"getFanSpeeds",
			"()[F"
		).object<jfloatArray>();
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class HardwarePropertiesManager : public __jni_impl::android::os::HardwarePropertiesManager
	{
	public:
		HardwarePropertiesManager(QAndroidJniObject obj) { __thiz = obj; }
		HardwarePropertiesManager()
		{
			__constructor();
		}
	};
} // namespace android::os

