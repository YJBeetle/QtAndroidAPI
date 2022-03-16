#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SQLiteException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteException::SQLiteException()
		: android::database::SQLException(
			"android.database.sqlite.SQLiteException",
			"()V"
		) {}
	inline SQLiteException::SQLiteException(JString arg0)
		: android::database::SQLException(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SQLiteException::SQLiteException(JString arg0, JThrowable arg1)
		: android::database::SQLException(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"

