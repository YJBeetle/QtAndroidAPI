#include "./SQLiteOutOfMemoryException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteOutOfMemoryException::SQLiteOutOfMemoryException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteOutOfMemoryException::SQLiteOutOfMemoryException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteOutOfMemoryException",
			"()V"
		);
	}
	SQLiteOutOfMemoryException::SQLiteOutOfMemoryException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteOutOfMemoryException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::database::sqlite

