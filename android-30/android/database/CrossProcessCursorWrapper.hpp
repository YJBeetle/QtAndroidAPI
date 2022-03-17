#pragma once

#include "./CursorWindow.def.hpp"
#include "./CrossProcessCursorWrapper.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline CrossProcessCursorWrapper::CrossProcessCursorWrapper(JObject arg0)
		: android::database::CursorWrapper(
			"android.database.CrossProcessCursorWrapper",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void CrossProcessCursorWrapper::fillWindow(jint arg0, android::database::CursorWindow arg1) const
	{
		callMethod<void>(
			"fillWindow",
			"(ILandroid/database/CursorWindow;)V",
			arg0,
			arg1.object()
		);
	}
	inline android::database::CursorWindow CrossProcessCursorWrapper::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/database/CursorWindow;"
		);
	}
	inline jboolean CrossProcessCursorWrapper::onMove(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::database

// Base class headers
#include "./CursorWrapper.hpp"

