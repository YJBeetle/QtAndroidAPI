#include "./sqlite/SQLiteDatabase.hpp"
#include "./DefaultDatabaseErrorHandler.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	DefaultDatabaseErrorHandler::DefaultDatabaseErrorHandler(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DefaultDatabaseErrorHandler::DefaultDatabaseErrorHandler()
		: __JniBaseClass(
			"android.database.DefaultDatabaseErrorHandler",
			"()V"
		) {}
	
	// Methods
	void DefaultDatabaseErrorHandler::onCorruption(android::database::sqlite::SQLiteDatabase arg0)
	{
		callMethod<void>(
			"onCorruption",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.object()
		);
	}
} // namespace android::database

