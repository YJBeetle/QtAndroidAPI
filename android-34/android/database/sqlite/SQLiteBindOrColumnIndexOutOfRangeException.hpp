#pragma once

#include "../../../JString.hpp"
#include "./SQLiteBindOrColumnIndexOutOfRangeException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteBindOrColumnIndexOutOfRangeException::SQLiteBindOrColumnIndexOutOfRangeException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteBindOrColumnIndexOutOfRangeException",
			"()V"
		) {}
	inline SQLiteBindOrColumnIndexOutOfRangeException::SQLiteBindOrColumnIndexOutOfRangeException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteBindOrColumnIndexOutOfRangeException",
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
