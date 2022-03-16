#pragma once

#include "../../../JString.hpp"
#include "./SQLiteDoneException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteDoneException::SQLiteDoneException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDoneException",
			"()V"
		) {}
	inline SQLiteDoneException::SQLiteDoneException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDoneException",
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

