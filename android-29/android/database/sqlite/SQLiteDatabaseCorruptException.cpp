#include "./SQLiteDatabaseCorruptException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
			"()V"
		);
	}
	SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database::sqlite

