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
	
	// QAndroidJniObject forward
	CursorJoiner_Result::CursorJoiner_Result(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::database::CursorJoiner_Result CursorJoiner_Result::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.database.CursorJoiner$Result",
			"valueOf",
			"(Ljava/lang/String;)Landroid/database/CursorJoiner$Result;",
			arg0
		);
	}
	jarray CursorJoiner_Result::values()
	{
		return callStaticObjectMethod(
			"android.database.CursorJoiner$Result",
			"values",
			"()[Landroid/database/CursorJoiner$Result;"
		).object<jarray>();
	}
} // namespace android::database

