#include "./SQLiteDatabaseLockedException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteDatabaseLockedException::SQLiteDatabaseLockedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteDatabaseLockedException::SQLiteDatabaseLockedException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabaseLockedException",
			"()V"
		);
	}
	SQLiteDatabaseLockedException::SQLiteDatabaseLockedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabaseLockedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteDatabaseLockedException::SQLiteDatabaseLockedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabaseLockedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database::sqlite

