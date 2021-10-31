#include "./SQLiteDatatypeMismatchException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteDatatypeMismatchException::SQLiteDatatypeMismatchException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteDatatypeMismatchException::SQLiteDatatypeMismatchException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatatypeMismatchException",
			"()V"
		);
	}
	SQLiteDatatypeMismatchException::SQLiteDatatypeMismatchException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatatypeMismatchException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::database::sqlite

