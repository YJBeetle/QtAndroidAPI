#include "./SQLiteCantOpenDatabaseException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteCantOpenDatabaseException",
			"()V"
		);
	}
	SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteCantOpenDatabaseException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::database::sqlite

