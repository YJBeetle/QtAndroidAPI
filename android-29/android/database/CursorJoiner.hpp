#pragma once

#ifndef ANDROID_DATABASE_CURSORJOINER
#define ANDROID_DATABASE_CURSORJOINER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::database
{
	class CursorJoiner_Result;
}

namespace __jni_impl::android::database
{
	class CursorJoiner : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jarray arg3);
		
		// Methods
		void remove();
		QAndroidJniObject iterator();
		jboolean hasNext();
		QAndroidJniObject next();
	};
} // namespace __jni_impl::android::database

#include "CursorJoiner_Result.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void CursorJoiner::__constructor(__jni_impl::__JniBaseClass arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jarray arg3)
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
	void CursorJoiner::remove()
	{
		__thiz.callMethod<void>(
			"remove",
			"()V"
		);
	}
	QAndroidJniObject CursorJoiner::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean CursorJoiner::hasNext()
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	QAndroidJniObject CursorJoiner::next()
	{
		return __thiz.callObjectMethod(
			"next",
			"()Landroid/database/CursorJoiner$Result;"
		);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class CursorJoiner : public __jni_impl::android::database::CursorJoiner
	{
	public:
		CursorJoiner(QAndroidJniObject obj) { __thiz = obj; }
		CursorJoiner(__jni_impl::__JniBaseClass arg0, jarray arg1, __jni_impl::__JniBaseClass arg2, jarray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_CURSORJOINER

