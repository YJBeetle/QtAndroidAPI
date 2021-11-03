#include "./CursorJoiner_Result.hpp"
#include "./CursorJoiner.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	CursorJoiner::CursorJoiner(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CursorJoiner::CursorJoiner(JObject arg0, jarray arg1, JObject arg2, jarray arg3)
		: JObject(
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
	JObject CursorJoiner::iterator()
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

