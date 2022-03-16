#pragma once

#include "../../../JString.hpp"
#include "./SQLiteConstraintException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteConstraintException::SQLiteConstraintException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteConstraintException",
			"()V"
		) {}
	inline SQLiteConstraintException::SQLiteConstraintException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteConstraintException",
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

