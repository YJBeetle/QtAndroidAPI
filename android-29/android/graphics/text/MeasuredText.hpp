#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::graphics::text
{
	class MeasuredText : public __JniBaseClass
	{
	public:
		// Fields
		
		MeasuredText(QAndroidJniObject obj);
		// Constructors
		MeasuredText() = default;
		
		// Methods
		void getBounds(jint arg0, jint arg1, android::graphics::Rect arg2);
		jfloat getCharWidthAt(jint arg0);
		jfloat getWidth(jint arg0, jint arg1);
	};
} // namespace android::graphics::text

