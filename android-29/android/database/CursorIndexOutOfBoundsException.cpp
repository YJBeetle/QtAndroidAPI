#include "./CursorIndexOutOfBoundsException.hpp"

namespace android::database
{
	// Fields
	
	CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorIndexOutOfBoundsException",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::database

