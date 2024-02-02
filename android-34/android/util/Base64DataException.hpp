#pragma once

#include "../../JString.hpp"
#include "./Base64DataException.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline Base64DataException::Base64DataException(JString arg0)
		: java::io::IOException(
			"android.util.Base64DataException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::util

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
