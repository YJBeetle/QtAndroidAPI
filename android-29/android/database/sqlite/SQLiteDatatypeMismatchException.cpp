#include "./SQLiteDatatypeMismatchException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteDatatypeMismatchException::SQLiteDatatypeMismatchException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteDatatypeMismatchException::SQLiteDatatypeMismatchException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatatypeMismatchException",
			"()V"
		) {}
	SQLiteDatatypeMismatchException::SQLiteDatatypeMismatchException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDatatypeMismatchException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

