#pragma once

#include "../../../JString.hpp"
#include "./SQLiteDatabaseCorruptException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
			"()V"
		) {}
	inline SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
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

