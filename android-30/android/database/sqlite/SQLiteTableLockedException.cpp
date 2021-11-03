#include "../../../JString.hpp"
#include "./SQLiteTableLockedException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteTableLockedException::SQLiteTableLockedException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteTableLockedException::SQLiteTableLockedException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteTableLockedException",
			"()V"
		) {}
	SQLiteTableLockedException::SQLiteTableLockedException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteTableLockedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

