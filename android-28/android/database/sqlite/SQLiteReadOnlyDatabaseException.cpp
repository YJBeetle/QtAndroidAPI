#include "./SQLiteReadOnlyDatabaseException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteReadOnlyDatabaseException",
			"()V"
		) {}
	SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteReadOnlyDatabaseException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

