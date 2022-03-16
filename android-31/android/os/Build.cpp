#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Build.hpp"

namespace android::os
{
	// Fields
	JString Build::BOARD()
	{
		return getStaticObjectField(
			"android.os.Build",
			"BOARD",
			"Ljava/lang/String;"
		);
	}
	JString Build::BOOTLOADER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"BOOTLOADER",
			"Ljava/lang/String;"
		);
	}
	JString Build::BRAND()
	{
		return getStaticObjectField(
			"android.os.Build",
			"BRAND",
			"Ljava/lang/String;"
		);
	}
	JString Build::CPU_ABI()
	{
		return getStaticObjectField(
			"android.os.Build",
			"CPU_ABI",
			"Ljava/lang/String;"
		);
	}
	JString Build::CPU_ABI2()
	{
		return getStaticObjectField(
			"android.os.Build",
			"CPU_ABI2",
			"Ljava/lang/String;"
		);
	}
	JString Build::DEVICE()
	{
		return getStaticObjectField(
			"android.os.Build",
			"DEVICE",
			"Ljava/lang/String;"
		);
	}
	JString Build::DISPLAY()
	{
		return getStaticObjectField(
			"android.os.Build",
			"DISPLAY",
			"Ljava/lang/String;"
		);
	}
	JString Build::FINGERPRINT()
	{
		return getStaticObjectField(
			"android.os.Build",
			"FINGERPRINT",
			"Ljava/lang/String;"
		);
	}
	JString Build::HARDWARE()
	{
		return getStaticObjectField(
			"android.os.Build",
			"HARDWARE",
			"Ljava/lang/String;"
		);
	}
	JString Build::HOST()
	{
		return getStaticObjectField(
			"android.os.Build",
			"HOST",
			"Ljava/lang/String;"
		);
	}
	JString Build::ID()
	{
		return getStaticObjectField(
			"android.os.Build",
			"ID",
			"Ljava/lang/String;"
		);
	}
	JString Build::MANUFACTURER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"MANUFACTURER",
			"Ljava/lang/String;"
		);
	}
	JString Build::MODEL()
	{
		return getStaticObjectField(
			"android.os.Build",
			"MODEL",
			"Ljava/lang/String;"
		);
	}
	JString Build::ODM_SKU()
	{
		return getStaticObjectField(
			"android.os.Build",
			"ODM_SKU",
			"Ljava/lang/String;"
		);
	}
	JString Build::PRODUCT()
	{
		return getStaticObjectField(
			"android.os.Build",
			"PRODUCT",
			"Ljava/lang/String;"
		);
	}
	JString Build::RADIO()
	{
		return getStaticObjectField(
			"android.os.Build",
			"RADIO",
			"Ljava/lang/String;"
		);
	}
	JString Build::SERIAL()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SERIAL",
			"Ljava/lang/String;"
		);
	}
	JString Build::SKU()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SKU",
			"Ljava/lang/String;"
		);
	}
	JString Build::SOC_MANUFACTURER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SOC_MANUFACTURER",
			"Ljava/lang/String;"
		);
	}
	JString Build::SOC_MODEL()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SOC_MODEL",
			"Ljava/lang/String;"
		);
	}
	JArray Build::SUPPORTED_32_BIT_ABIS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_32_BIT_ABIS",
			"[Ljava/lang/String;"
		);
	}
	JArray Build::SUPPORTED_64_BIT_ABIS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_64_BIT_ABIS",
			"[Ljava/lang/String;"
		);
	}
	JArray Build::SUPPORTED_ABIS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_ABIS",
			"[Ljava/lang/String;"
		);
	}
	JString Build::TAGS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"TAGS",
			"Ljava/lang/String;"
		);
	}
	jlong Build::TIME()
	{
		return getStaticField<jlong>(
			"android.os.Build",
			"TIME"
		);
	}
	JString Build::TYPE()
	{
		return getStaticObjectField(
			"android.os.Build",
			"TYPE",
			"Ljava/lang/String;"
		);
	}
	JString Build::UNKNOWN()
	{
		return getStaticObjectField(
			"android.os.Build",
			"UNKNOWN",
			"Ljava/lang/String;"
		);
	}
	JString Build::USER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"USER",
			"Ljava/lang/String;"
		);
	}
	
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
	JString Build::getRadioVersion()
	{
		return callStaticObjectMethod(
			"android.os.Build",
			"getRadioVersion",
			"()Ljava/lang/String;"
		);
	}
	JString Build::getSerial()
	{
		return callStaticObjectMethod(
			"android.os.Build",
			"getSerial",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

