#include "../../JArray.hpp"
#include "./CursorJoiner_Result.hpp"
#include "../../JObject.hpp"
#include "./CursorJoiner.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	CursorJoiner::CursorJoiner(JObject arg0, JArray arg1, JObject arg2, JArray arg3)
		: JObject(
			"android.database.CursorJoiner",
			"(Landroid/database/Cursor;[Ljava/lang/String;Landroid/database/Cursor;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3.object<jarray>()
		) {}
	
	// Methods
	jboolean CursorJoiner::hasNext() const
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	JObject CursorJoiner::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	android::database::CursorJoiner_Result CursorJoiner::next() const
	{
		return callObjectMethod(
			"next",
			"()Landroid/database/CursorJoiner$Result;"
		);
	}
	void CursorJoiner::remove() const
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
} // namespace android::database

