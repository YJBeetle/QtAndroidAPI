#include "./SQLiteDatabaseLockedException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteDatabaseLockedException::SQLiteDatabaseLockedException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteDatabaseLockedException::SQLiteDatabaseLockedException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseLockedException",
			"()V"
		) {}
	SQLiteDatabaseLockedException::SQLiteDatabaseLockedException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseLockedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

