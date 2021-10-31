#include "./CursorJoiner_Result.hpp"
#include "./CursorJoiner.hpp"

namespace android::database
{
	// Fields
	
	CursorJoiner::CursorJoiner(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CursorJoiner::CursorJoiner(__JniBaseClass arg0, jarray arg1, __JniBaseClass arg2, jarray arg3)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorJoiner",
			"(Landroid/database/Cursor;[Ljava/lang/String;Landroid/database/Cursor;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	jboolean CursorJoiner::hasNext()
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	QAndroidJniObject CursorJoiner::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject CursorJoiner::next()
	{
		return __thiz.callObjectMethod(
			"next",
			"()Landroid/database/CursorJoiner$Result;"
		);
	}
	void CursorJoiner::remove()
	{
		__thiz.callMethod<void>(
			"remove",
			"()V"
		);
	}
} // namespace android::database

