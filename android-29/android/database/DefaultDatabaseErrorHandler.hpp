#pragma once

#include "./sqlite/SQLiteDatabase.def.hpp"
#include "./DefaultDatabaseErrorHandler.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline DefaultDatabaseErrorHandler::DefaultDatabaseErrorHandler()
		: JObject(
			"android.database.DefaultDatabaseErrorHandler",
			"()V"
		) {}
	
	// Methods
	inline void DefaultDatabaseErrorHandler::onCorruption(android::database::sqlite::SQLiteDatabase arg0) const
	{
		callMethod<void>(
			"onCorruption",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.object()
		);
	}
} // namespace android::database

// Base class headers

