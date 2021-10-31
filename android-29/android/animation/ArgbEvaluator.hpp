#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::animation
{
	class ArgbEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArgbEvaluator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ArgbEvaluator(QAndroidJniObject obj);
		
		// Constructors
		ArgbEvaluator();
		
		// Methods
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

