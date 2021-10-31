#include "./SQLiteAccessPermException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteAccessPermException::SQLiteAccessPermException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteAccessPermException::SQLiteAccessPermException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAccessPermException",
			"()V"
		);
	}
	SQLiteAccessPermException::SQLiteAccessPermException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAccessPermException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::database::sqlite

