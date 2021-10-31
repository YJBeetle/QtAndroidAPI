#include "./SQLiteDoneException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteDoneException::SQLiteDoneException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteDoneException::SQLiteDoneException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDoneException",
			"()V"
		) {}
	SQLiteDoneException::SQLiteDoneException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDoneException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

