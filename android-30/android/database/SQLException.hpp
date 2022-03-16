#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLException.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline SQLException::SQLException()
		: java::lang::RuntimeException(
			"android.database.SQLException",
			"()V"
		) {}
	inline SQLException::SQLException(JString arg0)
		: java::lang::RuntimeException(
			"android.database.SQLException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SQLException::SQLException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"android.database.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::database

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

