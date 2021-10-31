#include "./SQLiteException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteException::SQLiteException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteException::SQLiteException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteException",
			"()V"
		);
	}
	SQLiteException::SQLiteException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteException::SQLiteException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::database::sqlite

