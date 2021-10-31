#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::animation
{
	class FloatArrayEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		FloatArrayEvaluator(QAndroidJniObject obj);
		// Constructors
		FloatArrayEvaluator();
		FloatArrayEvaluator(jfloatArray arg0);
		
		// Methods
		jfloatArray evaluate(jfloat arg0, jfloatArray arg1, jfloatArray arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

