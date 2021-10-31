#include "./SQLiteDiskIOException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteDiskIOException::SQLiteDiskIOException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteDiskIOException::SQLiteDiskIOException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDiskIOException",
			"()V"
		);
	}
	SQLiteDiskIOException::SQLiteDiskIOException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDiskIOException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::database::sqlite

