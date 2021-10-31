#include "./SQLiteCantOpenDatabaseException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteCantOpenDatabaseException",
			"()V"
		) {}
	SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteCantOpenDatabaseException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

