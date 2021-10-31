#include "./SQLiteAccessPermException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteAccessPermException::SQLiteAccessPermException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteAccessPermException::SQLiteAccessPermException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteAccessPermException",
			"()V"
		) {}
	SQLiteAccessPermException::SQLiteAccessPermException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteAccessPermException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

