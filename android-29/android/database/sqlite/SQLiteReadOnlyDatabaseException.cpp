#include "./SQLiteReadOnlyDatabaseException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteReadOnlyDatabaseException",
			"()V"
		);
	}
	SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteReadOnlyDatabaseException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteReadOnlyDatabaseException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database::sqlite

