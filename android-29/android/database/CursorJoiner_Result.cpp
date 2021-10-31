#include "./CursorJoiner_Result.hpp"

namespace android::database
{
	// Fields
	QAndroidJniObject CursorJoiner_Result::BOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.database.CursorJoiner$Result",
			"BOTH",
			"Landroid/database/CursorJoiner$Result;"
		);
	}
	QAndroidJniObject CursorJoiner_Result::LEFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.database.CursorJoiner$Result",
			"LEFT",
			"Landroid/database/CursorJoiner$Result;"
		);
	}
	QAndroidJniObject CursorJoiner_Result::RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.database.CursorJoiner$Result",
			"RIGHT",
			"Landroid/database/CursorJoiner$Result;"
		);
	}
	
	CursorJoiner_Result::CursorJoiner_Result(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CursorJoiner_Result::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.CursorJoiner$Result",
			"valueOf",
			"(Ljava/lang/String;)Landroid/database/CursorJoiner$Result;",
			arg0
		);
	}
	jarray CursorJoiner_Result::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.CursorJoiner$Result",
			"values",
			"()[Landroid/database/CursorJoiner$Result;"
		).object<jarray>();
	}
} // namespace android::database

