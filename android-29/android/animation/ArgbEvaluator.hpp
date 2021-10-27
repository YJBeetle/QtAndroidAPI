#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::animation
{
	class ArgbEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		ArgbEvaluator(QAndroidJniObject obj);
		// Constructors
		ArgbEvaluator();
		
		// Methods
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

