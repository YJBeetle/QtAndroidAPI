#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CursorWrapper.hpp"

namespace android::database
{
	class CursorWindow;
}

namespace android::database
{
	class CrossProcessCursorWrapper : public android::database::CursorWrapper
	{
	public:
		// Fields
		
		CrossProcessCursorWrapper(QAndroidJniObject obj);
		// Constructors
		CrossProcessCursorWrapper(__JniBaseClass &arg0);
		CrossProcessCursorWrapper() = default;
		
		// Methods
		void fillWindow(jint arg0, android::database::CursorWindow arg1);
		QAndroidJniObject getWindow();
		jboolean onMove(jint arg0, jint arg1);
	};
} // namespace android::database

