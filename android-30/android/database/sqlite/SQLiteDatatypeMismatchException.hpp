#pragma once

#include "../../../JString.hpp"
#include "./SQLiteDatatypeMismatchException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteDatatypeMismatchException::SQLiteDatatypeMismatchException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatatypeMismatchException",
			"()V"
		) {}
	inline SQLiteDatatypeMismatchException::SQLiteDatatypeMismatchException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatatypeMismatchException",
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

