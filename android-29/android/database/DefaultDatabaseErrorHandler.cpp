#include "./sqlite/SQLiteDatabase.hpp"
#include "./DefaultDatabaseErrorHandler.hpp"

namespace android::database
{
	// Fields
	
	DefaultDatabaseErrorHandler::DefaultDatabaseErrorHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DefaultDatabaseErrorHandler::DefaultDatabaseErrorHandler()
	{
		__thiz = QAndroidJniObject(
			"android.database.DefaultDatabaseErrorHandler",
			"()V"
		);
	}
	
	// Methods
	void DefaultDatabaseErrorHandler::onCorruption(android::database::sqlite::SQLiteDatabase arg0)
	{
		__thiz.callMethod<void>(
			"onCorruption",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::database

