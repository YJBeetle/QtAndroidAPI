#pragma once

#include "../../../JString.hpp"
#include "./SQLiteDiskIOException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteDiskIOException::SQLiteDiskIOException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDiskIOException",
			"()V"
		) {}
	inline SQLiteDiskIOException::SQLiteDiskIOException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDiskIOException",
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

