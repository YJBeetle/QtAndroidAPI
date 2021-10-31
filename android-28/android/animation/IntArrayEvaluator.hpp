#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::animation
{
	class IntArrayEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntArrayEvaluator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IntArrayEvaluator(QAndroidJniObject obj);
		
		// Constructors
		IntArrayEvaluator();
		IntArrayEvaluator(jintArray arg0);
		
		// Methods
		jintArray evaluate(jfloat arg0, jintArray arg1, jintArray arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

