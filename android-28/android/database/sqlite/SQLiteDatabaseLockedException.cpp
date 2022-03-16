#include "../../../JString.hpp"
#include "./SQLiteDatabaseLockedException.hpp"

namespace android::database::sqlite
{
	// Fields
	
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

