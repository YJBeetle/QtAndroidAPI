#include "./CursorWindow.hpp"
#include "./CrossProcessCursorWrapper.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	CrossProcessCursorWrapper::CrossProcessCursorWrapper(QAndroidJniObject obj) : android::database::CursorWrapper(obj) {}
	
	// Constructors
	CrossProcessCursorWrapper::CrossProcessCursorWrapper(JObject arg0)
		: android::database::CursorWrapper(
			"android.database.CrossProcessCursorWrapper",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		) {}
	
	// Methods
	void CrossProcessCursorWrapper::fillWindow(jint arg0, android::database::CursorWindow arg1)
	{
		callMethod<void>(
			"fillWindow",
			"(ILandroid/database/CursorWindow;)V",
			arg0,
			arg1.object()
		);
	}
	android::database::CursorWindow CrossProcessCursorWrapper::getWindow()
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/database/CursorWindow;"
		);
	}
	jboolean CrossProcessCursorWrapper::onMove(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::database

