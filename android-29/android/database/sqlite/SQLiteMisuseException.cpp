#include "./SQLiteMisuseException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteMisuseException::SQLiteMisuseException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteMisuseException::SQLiteMisuseException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteMisuseException",
			"()V"
		);
	}
	SQLiteMisuseException::SQLiteMisuseException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteMisuseException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLiteMisuseException::SQLiteMisuseException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteMisuseException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::database::sqlite

