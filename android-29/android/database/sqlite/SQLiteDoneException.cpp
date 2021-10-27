#include "./SQLiteDoneException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteDoneException::SQLiteDoneException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteDoneException::SQLiteDoneException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDoneException",
			"()V"
		);
	}
	SQLiteDoneException::SQLiteDoneException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDoneException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteDoneException::SQLiteDoneException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDoneException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database::sqlite

