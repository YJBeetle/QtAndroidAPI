#include "./SQLiteException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteException::SQLiteException(QJniObject obj) : android::database::SQLException(obj) {}
	
	// Constructors
	SQLiteException::SQLiteException()
		: android::database::SQLException(
			"android.database.sqlite.SQLiteException",
			"()V"
		) {}
	SQLiteException::SQLiteException(jstring arg0)
		: android::database::SQLException(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLiteException::SQLiteException(jstring arg0, jthrowable arg1)
		: android::database::SQLException(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::database::sqlite

