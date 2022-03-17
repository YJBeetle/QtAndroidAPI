#pragma once

#include "../../../JString.hpp"
#include "./SQLiteOutOfMemoryException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteOutOfMemoryException::SQLiteOutOfMemoryException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteOutOfMemoryException",
			"()V"
		) {}
	inline SQLiteOutOfMemoryException::SQLiteOutOfMemoryException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteOutOfMemoryException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"

