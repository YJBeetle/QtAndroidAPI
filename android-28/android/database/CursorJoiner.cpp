#include "./CursorJoiner_Result.hpp"
#include "./CursorJoiner.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	CursorJoiner::CursorJoiner(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CursorJoiner::CursorJoiner(__JniBaseClass arg0, jarray arg1, __JniBaseClass arg2, jarray arg3)
		: __JniBaseClass(
			"android.database.CursorJoiner",
			"(Landroid/database/Cursor;[Ljava/lang/String;Landroid/database/Cursor;[Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	jboolean CursorJoiner::hasNext()
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	__JniBaseClass CursorJoiner::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	android::database::CursorJoiner_Result CursorJoiner::next()
	{
		return callObjectMethod(
			"next",
			"()Landroid/database/CursorJoiner$Result;"
		);
	}
	void CursorJoiner::remove()
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
} // namespace android::database

