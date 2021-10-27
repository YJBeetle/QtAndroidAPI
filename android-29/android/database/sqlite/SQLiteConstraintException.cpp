#include "./SQLiteConstraintException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteConstraintException::SQLiteConstraintException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteConstraintException::SQLiteConstraintException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteConstraintException",
			"()V"
		);
	}
	SQLiteConstraintException::SQLiteConstraintException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteConstraintException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteConstraintException::SQLiteConstraintException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteConstraintException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database::sqlite

