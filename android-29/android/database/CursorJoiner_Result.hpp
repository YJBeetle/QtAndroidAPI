#pragma once

#ifndef ANDROID_DATABASE_CURSORJOINER_RESULT
#define ANDROID_DATABASE_CURSORJOINER_RESULT

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::database
{
	class CursorJoiner_Result : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject RIGHT();
		static QAndroidJniObject LEFT();
		static QAndroidJniObject BOTH();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::database


namespace __jni_impl::android::database
{
	// Fields
	QAndroidJniObject CursorJoiner_Result::RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.database.CursorJoiner$Result",
			"RIGHT",
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
	QAndroidJniObject CursorJoiner_Result::BOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.database.CursorJoiner$Result",
			"BOTH",
			"Landroid/database/CursorJoiner$Result;"
		);
	}
	
	// Constructors
	void CursorJoiner_Result::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorJoiner$Result",
			"(V)V");
	}
	
	// Methods
	jarray CursorJoiner_Result::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.CursorJoiner$Result",
			"values",
			"()[Landroid/database/CursorJoiner$Result;"
		).object<jarray>();
	}
	QAndroidJniObject CursorJoiner_Result::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.CursorJoiner$Result",
			"valueOf",
			"(Ljava/lang/String;)Landroid/database/CursorJoiner$Result;",
			arg0
		);
	}
	QAndroidJniObject CursorJoiner_Result::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.CursorJoiner$Result",
			"valueOf",
			"(Ljava/lang/String;)Landroid/database/CursorJoiner$Result;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class CursorJoiner_Result : public __jni_impl::android::database::CursorJoiner_Result
	{
	public:
		CursorJoiner_Result(QAndroidJniObject obj) { __thiz = obj; }
		CursorJoiner_Result()
		{
			__constructor();
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_CURSORJOINER_RESULT

