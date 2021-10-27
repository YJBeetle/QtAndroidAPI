#include "./SQLiteAbortException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteAbortException::SQLiteAbortException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteAbortException::SQLiteAbortException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAbortException",
			"()V"
		);
	}
	SQLiteAbortException::SQLiteAbortException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAbortException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteAbortException::SQLiteAbortException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAbortException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database::sqlite

