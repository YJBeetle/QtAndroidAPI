#include "../../../JString.hpp"
#include "./SQLiteCantOpenDatabaseException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteCantOpenDatabaseException",
			"()V"
		) {}
	SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteCantOpenDatabaseException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

