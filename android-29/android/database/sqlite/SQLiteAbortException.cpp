#include "./SQLiteAbortException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteAbortException::SQLiteAbortException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteAbortException::SQLiteAbortException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteAbortException",
			"()V"
		) {}
	SQLiteAbortException::SQLiteAbortException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteAbortException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

