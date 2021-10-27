#include "./SQLiteTableLockedException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteTableLockedException::SQLiteTableLockedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteTableLockedException::SQLiteTableLockedException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteTableLockedException",
			"()V"
		);
	}
	SQLiteTableLockedException::SQLiteTableLockedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteTableLockedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteTableLockedException::SQLiteTableLockedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteTableLockedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database::sqlite

