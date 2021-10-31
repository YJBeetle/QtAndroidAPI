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
	SQLiteMisuseException::SQLiteMisuseException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteMisuseException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::database::sqlite

