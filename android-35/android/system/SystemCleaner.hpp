#pragma once

#include "../../java/lang/ref/Cleaner.def.hpp"
#include "./SystemCleaner.def.hpp"

namespace android::system
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::ref::Cleaner SystemCleaner::cleaner()
	{
		return callStaticObjectMethod(
			"android.system.SystemCleaner",
			"cleaner",
			"()Ljava/lang/ref/Cleaner;"
		);
	}
} // namespace android::system

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::system;
#endif
