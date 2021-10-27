#include "./SQLiteFullException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteFullException::SQLiteFullException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteFullException::SQLiteFullException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteFullException",
			"()V"
		);
	}
	SQLiteFullException::SQLiteFullException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteFullException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteFullException::SQLiteFullException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteFullException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database::sqlite

