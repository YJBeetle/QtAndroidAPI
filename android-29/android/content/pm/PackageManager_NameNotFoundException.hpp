#pragma once

#include "../../../JString.hpp"
#include "./PackageManager_NameNotFoundException.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline PackageManager_NameNotFoundException::PackageManager_NameNotFoundException()
		: android::util::AndroidException(
			"android.content.pm.PackageManager$NameNotFoundException",
			"()V"
		) {}
	inline PackageManager_NameNotFoundException::PackageManager_NameNotFoundException(JString arg0)
		: android::util::AndroidException(
			"android.content.pm.PackageManager$NameNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::content::pm

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../util/AndroidException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
