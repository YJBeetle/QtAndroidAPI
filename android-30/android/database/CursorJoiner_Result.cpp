#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./CursorJoiner_Result.hpp"

namespace android::database
{
	// Fields
	android::database::CursorJoiner_Result CursorJoiner_Result::BOTH()
	{
		return getStaticObjectField(
			"android.database.CursorJoiner$Result",
			"BOTH",
			"Landroid/database/CursorJoiner$Result;"
		);
	}
	android::database::CursorJoiner_Result CursorJoiner_Result::LEFT()
	{
		return getStaticObjectField(
			"android.database.CursorJoiner$Result",
			"LEFT",
			"Landroid/database/CursorJoiner$Result;"
		);
	}
	android::database::CursorJoiner_Result CursorJoiner_Result::RIGHT()
	{
		return getStaticObjectField(
			"android.database.CursorJoiner$Result",
			"RIGHT",
			"Landroid/database/CursorJoiner$Result;"
		);
	}
	
	// Constructors
	
	// Methods
	android::database::CursorJoiner_Result CursorJoiner_Result::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.database.CursorJoiner$Result",
			"valueOf",
			"(Ljava/lang/String;)Landroid/database/CursorJoiner$Result;",
			arg0.object<jstring>()
		);
	}
	JArray CursorJoiner_Result::values()
	{
		return callStaticObjectMethod(
			"android.database.CursorJoiner$Result",
			"values",
			"()[Landroid/database/CursorJoiner$Result;"
		);
	}
} // namespace android::database

