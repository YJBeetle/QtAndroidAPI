#pragma once

#include "../../JString.hpp"
#include "./CursorIndexOutOfBoundsException.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(JString arg0)
		: java::lang::IndexOutOfBoundsException(
			"android.database.CursorIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(jint arg0, jint arg1)
		: java::lang::IndexOutOfBoundsException(
			"android.database.CursorIndexOutOfBoundsException",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::database

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IndexOutOfBoundsException.hpp"

