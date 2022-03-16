#include "../../../JString.hpp"
#include "./SQLiteCantOpenDatabaseException.hpp"

namespace android::database::sqlite
{
	// Fields
	
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

