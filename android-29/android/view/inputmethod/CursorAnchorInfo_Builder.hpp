#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Matrix;
}
namespace android::view::inputmethod
{
	class CursorAnchorInfo;
}

namespace android::view::inputmethod
{
	class CursorAnchorInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		CursorAnchorInfo_Builder(QAndroidJniObject obj);
		// Constructors
		CursorAnchorInfo_Builder();
		
		// Methods
		QAndroidJniObject addCharacterBounds(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5);
		QAndroidJniObject build();
		void reset();
		QAndroidJniObject setComposingText(jint arg0, jstring arg1);
		QAndroidJniObject setInsertionMarkerLocation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4);
		QAndroidJniObject setMatrix(android::graphics::Matrix arg0);
		QAndroidJniObject setSelectionRange(jint arg0, jint arg1);
	};
} // namespace android::view::inputmethod

