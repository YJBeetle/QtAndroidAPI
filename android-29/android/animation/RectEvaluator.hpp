#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::animation
{
	class RectEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		RectEvaluator(QAndroidJniObject obj);
		// Constructors
		RectEvaluator();
		RectEvaluator(android::graphics::Rect arg0);
		
		// Methods
		QAndroidJniObject evaluate(jfloat arg0, android::graphics::Rect arg1, android::graphics::Rect arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

