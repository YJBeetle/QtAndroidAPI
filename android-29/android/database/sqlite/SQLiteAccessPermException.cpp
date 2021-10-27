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
	SQLiteAccessPermException::SQLiteAccessPermException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAccessPermException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteAccessPermException::SQLiteAccessPermException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAccessPermException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database::sqlite

