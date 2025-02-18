#pragma once

#include "../../JString.hpp"
#include "./CursorWindowAllocationException.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline CursorWindowAllocationException::CursorWindowAllocationException(JString arg0)
		: java::lang::RuntimeException(
			"android.database.CursorWindowAllocationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database;
#endif
