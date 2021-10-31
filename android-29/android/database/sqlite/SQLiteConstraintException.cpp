#include "./SQLiteConstraintException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteConstraintException::SQLiteConstraintException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteConstraintException::SQLiteConstraintException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteConstraintException",
			"()V"
		) {}
	SQLiteConstraintException::SQLiteConstraintException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteConstraintException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

