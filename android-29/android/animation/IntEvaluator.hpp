#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class Integer;
}

namespace android::animation
{
	class IntEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntEvaluator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IntEvaluator(QAndroidJniObject obj);
		
		// Constructors
		IntEvaluator();
		
		// Methods
		QAndroidJniObject evaluate(jfloat arg0, java::lang::Integer arg1, java::lang::Integer arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

