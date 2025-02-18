#pragma once

#include "../../JString.hpp"
#include "./KeyCharacterMap_UnavailableException.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline KeyCharacterMap_UnavailableException::KeyCharacterMap_UnavailableException(JString arg0)
		: android::util::AndroidRuntimeException(
			"android.view.KeyCharacterMap$UnavailableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
