#include "./SQLiteDatabaseCorruptException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
			"()V"
		) {}
	SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

