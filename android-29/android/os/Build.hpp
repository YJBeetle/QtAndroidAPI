#pragma once

#ifndef ANDROID_OS_BUILD
#define ANDROID_OS_BUILD

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class Build : public __JniBaseClass
	{
	public:
		// Fields
		static jstring BOARD();
		static jstring BOOTLOADER();
		static jstring BRAND();
		static jstring CPU_ABI();
		static jstring CPU_ABI2();
		static jstring DEVICE();
		static jstring DISPLAY();
		static jstring FINGERPRINT();
		static jstring HARDWARE();
		static jstring HOST();
		static jstring ID();
		static jstring MANUFACTURER();
		static jstring MODEL();
		static jstring PRODUCT();
		static jstring RADIO();
		static jstring SERIAL();
		static jarray SUPPORTED_32_BIT_ABIS();
		static jarray SUPPORTED_64_BIT_ABIS();
		static jarray SUPPORTED_ABIS();
		static jstring TAGS();
		static jlong TIME();
		static jstring TYPE();
		static jstring UNKNOWN();
		static jstring USER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getFingerprintedPartitions();
		static jstring getRadioVersion();
		static jstring getSerial();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	jstring Build::BOARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"BOARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::BOOTLOADER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"BOOTLOADER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::BRAND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"BRAND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::CPU_ABI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"CPU_ABI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::CPU_ABI2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"CPU_ABI2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::DISPLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"DISPLAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::FINGERPRINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"FINGERPRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::HARDWARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"HARDWARE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::HOST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"HOST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::MANUFACTURER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"MANUFACTURER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::MODEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"MODEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::PRODUCT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"PRODUCT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::RADIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"RADIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::SERIAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"SERIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Build::SUPPORTED_32_BIT_ABIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_32_BIT_ABIS",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray Build::SUPPORTED_64_BIT_ABIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_64_BIT_ABIS",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray Build::SUPPORTED_ABIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_ABIS",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring Build::TAGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"TAGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Build::TIME()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.os.Build",
			"TIME"
		);
	}
	jstring Build::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"UNKNOWN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::USER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"USER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Build::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Build",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Build::getFingerprintedPartitions()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Build",
			"getFingerprintedPartitions",
			"()Ljava/util/List;"
		);
	}
	jstring Build::getRadioVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Build",
			"getRadioVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::getSerial()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Build",
			"getSerial",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Build : public __jni_impl::android::os::Build
	{
	public:
		Build(QAndroidJniObject obj) { __thiz = obj; }
		Build()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_BUILD

