#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class PointF;
}

namespace android::animation
{
	class PointFEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		PointFEvaluator(QAndroidJniObject obj);
		// Constructors
		PointFEvaluator();
		PointFEvaluator(android::graphics::PointF arg0);
		
		// Methods
		QAndroidJniObject evaluate(jfloat arg0, android::graphics::PointF arg1, android::graphics::PointF arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

