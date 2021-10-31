#include "./SQLiteFullException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteFullException::SQLiteFullException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteFullException::SQLiteFullException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteFullException",
			"()V"
		) {}
	SQLiteFullException::SQLiteFullException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteFullException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

