#pragma once

#include "../../../JString.hpp"
#include "./SQLiteMisuseException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteMisuseException::SQLiteMisuseException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteMisuseException",
			"()V"
		) {}
	inline SQLiteMisuseException::SQLiteMisuseException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteMisuseException",
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

