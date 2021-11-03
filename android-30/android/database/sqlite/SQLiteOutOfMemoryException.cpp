#include "../../../JString.hpp"
#include "./SQLiteOutOfMemoryException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteOutOfMemoryException::SQLiteOutOfMemoryException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteOutOfMemoryException::SQLiteOutOfMemoryException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteOutOfMemoryException",
			"()V"
		) {}
	SQLiteOutOfMemoryException::SQLiteOutOfMemoryException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteOutOfMemoryException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

