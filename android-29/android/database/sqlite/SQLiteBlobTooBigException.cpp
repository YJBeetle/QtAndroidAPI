#include "./SQLiteBlobTooBigException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteBlobTooBigException::SQLiteBlobTooBigException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteBlobTooBigException::SQLiteBlobTooBigException()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteBlobTooBigException",
			"()V"
		);
	}
	SQLiteBlobTooBigException::SQLiteBlobTooBigException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteBlobTooBigException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::database::sqlite

