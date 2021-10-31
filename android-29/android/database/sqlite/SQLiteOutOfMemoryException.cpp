#include "./SQLiteOutOfMemoryException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteOutOfMemoryException::SQLiteOutOfMemoryException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteOutOfMemoryException::SQLiteOutOfMemoryException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteOutOfMemoryException",
			"()V"
		) {}
	SQLiteOutOfMemoryException::SQLiteOutOfMemoryException(jstring arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteOutOfMemoryException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database::sqlite

