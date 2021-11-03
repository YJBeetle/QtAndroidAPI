#include "../../../JString.hpp"
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
	SQLiteDatabaseLockedException::SQLiteDatabaseLockedException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseLockedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

