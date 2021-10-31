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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FloatEvaluator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FloatEvaluator(QAndroidJniObject obj);
		
		// Constructors
		FloatEvaluator();
		
		// Methods
		java::lang::Float evaluate(jfloat arg0, java::lang::Number arg1, java::lang::Number arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

