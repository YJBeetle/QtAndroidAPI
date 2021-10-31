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
	SQLiteTableLockedException::SQLiteTableLockedException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteTableLockedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::database::sqlite

