#include "./SQLiteMisuseException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteMisuseException::SQLiteMisuseException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteMisuseException::SQLiteMisuseException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteMisuseException",
			"()V"
		) {}
	SQLiteMisuseException::SQLiteMisuseException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteMisuseException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

