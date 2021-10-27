#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Animation.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::animation
{
	class Transformation;
}

namespace android::view::animation
{
	class RotateAnimation : public android::view::animation::Animation
	{
	public:
		// Fields
		
		RotateAnimation(QAndroidJniObject obj);
		// Constructors
		RotateAnimation(android::content::Context &arg0, __JniBaseClass &arg1);
		RotateAnimation(jfloat &arg0, jfloat &arg1);
		RotateAnimation(jfloat &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3);
		RotateAnimation(jfloat &arg0, jfloat &arg1, jint &arg2, jfloat &arg3, jint &arg4, jfloat &arg5);
		RotateAnimation() = default;
		
		// Methods
		void initialize(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::view::animation

