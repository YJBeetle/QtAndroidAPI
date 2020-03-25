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
		static QAndroidJniObject BOARD();
		static QAndroidJniObject BOOTLOADER();
		static QAndroidJniObject BRAND();
		static QAndroidJniObject CPU_ABI();
		static QAndroidJniObject CPU_ABI2();
		static QAndroidJniObject DEVICE();
		static QAndroidJniObject DISPLAY();
		static QAndroidJniObject FINGERPRINT();
		static QAndroidJniObject HARDWARE();
		static QAndroidJniObject HOST();
		static QAndroidJniObject ID();
		static QAndroidJniObject MANUFACTURER();
		static QAndroidJniObject MODEL();
		static QAndroidJniObject PRODUCT();
		static QAndroidJniObject RADIO();
		static QAndroidJniObject SERIAL();
		static QAndroidJniObject SUPPORTED_32_BIT_ABIS();
		static QAndroidJniObject SUPPORTED_64_BIT_ABIS();
		static QAndroidJniObject SUPPORTED_ABIS();
		static QAndroidJniObject TAGS();
		static jlong TIME();
		static QAndroidJniObject TYPE();
		static QAndroidJniObject UNKNOWN();
		static QAndroidJniObject USER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getFingerprintedPartitions();
		static QAndroidJniObject getRadioVersion();
		static QAndroidJniObject getSerial();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject Build::BOARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"BOARD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::BOOTLOADER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"BOOTLOADER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::BRAND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"BRAND",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::CPU_ABI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"CPU_ABI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::CPU_ABI2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"CPU_ABI2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"DEVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::DISPLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"DISPLAY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::FINGERPRINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"FINGERPRINT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::HARDWARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"HARDWARE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::HOST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"HOST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::MANUFACTURER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"MANUFACTURER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::MODEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"MODEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::PRODUCT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"PRODUCT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::RADIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"RADIO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::SERIAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"SERIAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::SUPPORTED_32_BIT_ABIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_32_BIT_ABIS",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject Build::SUPPORTED_64_BIT_ABIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_64_BIT_ABIS",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject Build::SUPPORTED_ABIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_ABIS",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject Build::TAGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"TAGS",
			"Ljava/lang/String;");
	}
	jlong Build::TIME()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.os.Build",
			"TIME");
	}
	QAndroidJniObject Build::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"UNKNOWN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build::USER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build",
			"USER",
			"Ljava/lang/String;");
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
			"()Ljava/util/List;");
	}
	QAndroidJniObject Build::getRadioVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Build",
			"getRadioVersion",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Build::getSerial()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Build",
			"getSerial",
			"()Ljava/lang/String;");
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

