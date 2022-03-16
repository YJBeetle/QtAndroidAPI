#pragma once

#include "../../../JString.hpp"
#include "./SQLiteBlobTooBigException.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteBlobTooBigException::SQLiteBlobTooBigException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteBlobTooBigException",
			"()V"
		) {}
	inline SQLiteBlobTooBigException::SQLiteBlobTooBigException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteBlobTooBigException",
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

