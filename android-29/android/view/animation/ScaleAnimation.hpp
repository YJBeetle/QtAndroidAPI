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
	class ScaleAnimation : public android::view::animation::Animation
	{
	public:
		// Fields
		
		ScaleAnimation(QAndroidJniObject obj);
		// Constructors
		ScaleAnimation(android::content::Context &arg0, __JniBaseClass &arg1);
		ScaleAnimation(jfloat &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3);
		ScaleAnimation(jfloat &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3, jfloat &arg4, jfloat &arg5);
		ScaleAnimation(jfloat &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3, jint &arg4, jfloat &arg5, jint &arg6, jfloat &arg7);
		ScaleAnimation() = default;
		
		// Methods
		void initialize(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::view::animation

