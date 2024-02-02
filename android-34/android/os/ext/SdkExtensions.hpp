#pragma once

#include "./SdkExtensions.def.hpp"

namespace android::os::ext
{
	// Fields
	inline jint SdkExtensions::AD_SERVICES()
	{
		return getStaticField<jint>(
			"android.os.ext.SdkExtensions",
			"AD_SERVICES"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject SdkExtensions::getAllExtensionVersions()
	{
		return callStaticObjectMethod(
			"android.os.ext.SdkExtensions",
			"getAllExtensionVersions",
			"()Ljava/util/Map;"
		);
	}
	inline jint SdkExtensions::getExtensionVersion(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.os.ext.SdkExtensions",
			"getExtensionVersion",
			"(I)I",
			arg0
		);
	}
} // namespace android::os::ext

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::ext;
#endif
