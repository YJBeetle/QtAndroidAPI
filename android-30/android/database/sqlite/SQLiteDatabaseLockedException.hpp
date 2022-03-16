#pragma once

#include "../../../JString.hpp"
#include "./SQLiteDatabaseLockedException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteDatabaseLockedException::SQLiteDatabaseLockedException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseLockedException",
			"()V"
		) {}
	inline SQLiteDatabaseLockedException::SQLiteDatabaseLockedException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseLockedException",
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

