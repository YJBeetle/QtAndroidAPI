#include "./CursorWindow.hpp"
#include "./CrossProcessCursorWrapper.hpp"

namespace android::database
{
	// Fields
	
	CrossProcessCursorWrapper::CrossProcessCursorWrapper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CrossProcessCursorWrapper::CrossProcessCursorWrapper(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CrossProcessCursorWrapper",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void CrossProcessCursorWrapper::fillWindow(jint arg0, android::database::CursorWindow arg1)
	{
		__thiz.callMethod<void>(
			"fillWindow",
			"(ILandroid/database/CursorWindow;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CrossProcessCursorWrapper::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/database/CursorWindow;"
		);
	}
	jboolean CrossProcessCursorWrapper::onMove(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::database

