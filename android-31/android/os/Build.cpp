#include "./Build.hpp"

namespace android::os
{
	// Fields
	jstring Build::BOARD()
	{
		return getStaticObjectField(
			"android.os.Build",
			"BOARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::BOOTLOADER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"BOOTLOADER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::BRAND()
	{
		return getStaticObjectField(
			"android.os.Build",
			"BRAND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::CPU_ABI()
	{
		return getStaticObjectField(
			"android.os.Build",
			"CPU_ABI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::CPU_ABI2()
	{
		return getStaticObjectField(
			"android.os.Build",
			"CPU_ABI2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::DEVICE()
	{
		return getStaticObjectField(
			"android.os.Build",
			"DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::DISPLAY()
	{
		return getStaticObjectField(
			"android.os.Build",
			"DISPLAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::FINGERPRINT()
	{
		return getStaticObjectField(
			"android.os.Build",
			"FINGERPRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::HARDWARE()
	{
		return getStaticObjectField(
			"android.os.Build",
			"HARDWARE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::HOST()
	{
		return getStaticObjectField(
			"android.os.Build",
			"HOST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::ID()
	{
		return getStaticObjectField(
			"android.os.Build",
			"ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::MANUFACTURER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"MANUFACTURER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::MODEL()
	{
		return getStaticObjectField(
			"android.os.Build",
			"MODEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::ODM_SKU()
	{
		return getStaticObjectField(
			"android.os.Build",
			"ODM_SKU",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::PRODUCT()
	{
		return getStaticObjectField(
			"android.os.Build",
			"PRODUCT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::RADIO()
	{
		return getStaticObjectField(
			"android.os.Build",
			"RADIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::SERIAL()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SERIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::SKU()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SKU",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::SOC_MANUFACTURER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SOC_MANUFACTURER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::SOC_MODEL()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SOC_MODEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Build::SUPPORTED_32_BIT_ABIS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_32_BIT_ABIS",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray Build::SUPPORTED_64_BIT_ABIS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_64_BIT_ABIS",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray Build::SUPPORTED_ABIS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_ABIS",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring Build::TAGS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"TAGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Build::TIME()
	{
		return getStaticField<jlong>(
			"android.os.Build",
			"TIME"
		);
	}
	jstring Build::TYPE()
	{
		return getStaticObjectField(
			"android.os.Build",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::UNKNOWN()
	{
		return getStaticObjectField(
			"android.os.Build",
			"UNKNOWN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::USER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"USER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Build::Build(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Build::Build()
		: JObject(
			"android.os.Build",
			"()V"
		) {}
	
	// Methods
	JObject Build::getFingerprintedPartitions()
	{
		return callStaticObjectMethod(
			"android.os.Build",
			"getFingerprintedPartitions",
			"()Ljava/util/List;"
		);
	}
	jstring Build::getRadioVersion()
	{
		return callStaticObjectMethod(
			"android.os.Build",
			"getRadioVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build::getSerial()
	{
		return callStaticObjectMethod(
			"android.os.Build",
			"getSerial",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::os

