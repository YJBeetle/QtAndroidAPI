#include "./SQLiteTableLockedException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteTableLockedException::SQLiteTableLockedException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteTableLockedException::SQLiteTableLockedException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteTableLockedException",
			"()V"
		) {}
	SQLiteTableLockedException::SQLiteTableLockedException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteTableLockedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

