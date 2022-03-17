#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Build.def.hpp"

namespace android::os
{
	// Fields
	inline JString Build::BOARD()
	{
		return getStaticObjectField(
			"android.os.Build",
			"BOARD",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::BOOTLOADER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"BOOTLOADER",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::BRAND()
	{
		return getStaticObjectField(
			"android.os.Build",
			"BRAND",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::CPU_ABI()
	{
		return getStaticObjectField(
			"android.os.Build",
			"CPU_ABI",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::CPU_ABI2()
	{
		return getStaticObjectField(
			"android.os.Build",
			"CPU_ABI2",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::DEVICE()
	{
		return getStaticObjectField(
			"android.os.Build",
			"DEVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::DISPLAY()
	{
		return getStaticObjectField(
			"android.os.Build",
			"DISPLAY",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::FINGERPRINT()
	{
		return getStaticObjectField(
			"android.os.Build",
			"FINGERPRINT",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::HARDWARE()
	{
		return getStaticObjectField(
			"android.os.Build",
			"HARDWARE",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::HOST()
	{
		return getStaticObjectField(
			"android.os.Build",
			"HOST",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::ID()
	{
		return getStaticObjectField(
			"android.os.Build",
			"ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::MANUFACTURER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"MANUFACTURER",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::MODEL()
	{
		return getStaticObjectField(
			"android.os.Build",
			"MODEL",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::PRODUCT()
	{
		return getStaticObjectField(
			"android.os.Build",
			"PRODUCT",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::RADIO()
	{
		return getStaticObjectField(
			"android.os.Build",
			"RADIO",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::SERIAL()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SERIAL",
			"Ljava/lang/String;"
		);
	}
	inline JArray Build::SUPPORTED_32_BIT_ABIS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_32_BIT_ABIS",
			"[Ljava/lang/String;"
		);
	}
	inline JArray Build::SUPPORTED_64_BIT_ABIS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_64_BIT_ABIS",
			"[Ljava/lang/String;"
		);
	}
	inline JArray Build::SUPPORTED_ABIS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"SUPPORTED_ABIS",
			"[Ljava/lang/String;"
		);
	}
	inline JString Build::TAGS()
	{
		return getStaticObjectField(
			"android.os.Build",
			"TAGS",
			"Ljava/lang/String;"
		);
	}
	inline jlong Build::TIME()
	{
		return getStaticField<jlong>(
			"android.os.Build",
			"TIME"
		);
	}
	inline JString Build::TYPE()
	{
		return getStaticObjectField(
			"android.os.Build",
			"TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::UNKNOWN()
	{
		return getStaticObjectField(
			"android.os.Build",
			"UNKNOWN",
			"Ljava/lang/String;"
		);
	}
	inline JString Build::USER()
	{
		return getStaticObjectField(
			"android.os.Build",
			"USER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Build::Build()
		: JObject(
			"android.os.Build",
			"()V"
		) {}
	
	// Methods
	inline JObject Build::getFingerprintedPartitions()
	{
		return callStaticObjectMethod(
			"android.os.Build",
			"getFingerprintedPartitions",
			"()Ljava/util/List;"
		);
	}
	inline JString Build::getRadioVersion()
	{
		return callStaticObjectMethod(
			"android.os.Build",
			"getRadioVersion",
			"()Ljava/lang/String;"
		);
	}
	inline JString Build::getSerial()
	{
		return callStaticObjectMethod(
			"android.os.Build",
			"getSerial",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
