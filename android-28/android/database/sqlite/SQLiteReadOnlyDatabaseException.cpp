#include "../../../JString.hpp"
#include "./SQLiteReadOnlyDatabaseException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteReadOnlyDatabaseException",
			"()V"
		) {}
	SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteReadOnlyDatabaseException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

