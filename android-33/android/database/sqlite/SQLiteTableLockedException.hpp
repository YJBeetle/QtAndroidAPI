#pragma once

#include "../../../JString.hpp"
#include "./SQLiteTableLockedException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteTableLockedException::SQLiteTableLockedException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteTableLockedException",
			"()V"
		) {}
	inline SQLiteTableLockedException::SQLiteTableLockedException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteTableLockedException",
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database::sqlite;
#endif
