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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PointFEvaluator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PointFEvaluator(QAndroidJniObject obj);
		
		// Constructors
		PointFEvaluator();
		PointFEvaluator(android::graphics::PointF arg0);
		
		// Methods
		QAndroidJniObject evaluate(jfloat arg0, android::graphics::PointF arg1, android::graphics::PointF arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

