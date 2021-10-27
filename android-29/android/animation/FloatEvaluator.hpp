#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class Float;
}
namespace java::lang
{
	class Number;
}

namespace android::animation
{
	class FloatEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		FloatEvaluator(QAndroidJniObject obj);
		// Constructors
		FloatEvaluator();
		
		// Methods
		QAndroidJniObject evaluate(jfloat arg0, java::lang::Number arg1, java::lang::Number arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

