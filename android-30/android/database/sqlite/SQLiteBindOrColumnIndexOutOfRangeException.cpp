#include "./SQLiteBindOrColumnIndexOutOfRangeException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteBindOrColumnIndexOutOfRangeException::SQLiteBindOrColumnIndexOutOfRangeException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteBindOrColumnIndexOutOfRangeException::SQLiteBindOrColumnIndexOutOfRangeException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteBindOrColumnIndexOutOfRangeException",
			"()V"
		) {}
	SQLiteBindOrColumnIndexOutOfRangeException::SQLiteBindOrColumnIndexOutOfRangeException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteBindOrColumnIndexOutOfRangeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

