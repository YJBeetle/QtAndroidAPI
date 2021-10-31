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
	SQLiteConstraintException::SQLiteConstraintException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteConstraintException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::database::sqlite

