#pragma once

#ifndef ANDROID_DATABASE_CROSSPROCESSCURSORWRAPPER
#define ANDROID_DATABASE_CROSSPROCESSCURSORWRAPPER

#include "../../__JniBaseClass.hpp"
#include "CursorWrapper.hpp"

namespace __jni_impl::android::database
{
	class CursorWindow;
}

namespace __jni_impl::android::database
{
	class CrossProcessCursorWrapper : public __jni_impl::android::database::CursorWrapper
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean onMove(jint arg0, jint arg1);
		void fillWindow(jint arg0, __jni_impl::android::database::CursorWindow arg1);
		QAndroidJniObject getWindow();
	};
} // namespace __jni_impl::android::database

#include "CursorWindow.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void CrossProcessCursorWrapper::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CrossProcessCursorWrapper",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean CrossProcessCursorWrapper::onMove(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1);
	}
	void CrossProcessCursorWrapper::fillWindow(jint arg0, __jni_impl::android::database::CursorWindow arg1)
	{
		__thiz.callMethod<void>(
			"fillWindow",
			"(ILandroid/database/CursorWindow;)V",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject CrossProcessCursorWrapper::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/database/CursorWindow;");
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class CrossProcessCursorWrapper : public __jni_impl::android::database::CrossProcessCursorWrapper
	{
	public:
		CrossProcessCursorWrapper(QAndroidJniObject obj) { __thiz = obj; }
		CrossProcessCursorWrapper(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_CROSSPROCESSCURSORWRAPPER

