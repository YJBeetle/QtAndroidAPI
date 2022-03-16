#include "../../../JString.hpp"
#include "./SQLiteDatabaseCorruptException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
			"()V"
		) {}
	SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

