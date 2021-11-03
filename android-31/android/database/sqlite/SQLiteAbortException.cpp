#include "../../../JString.hpp"
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
	SQLiteAbortException::SQLiteAbortException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteAbortException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

