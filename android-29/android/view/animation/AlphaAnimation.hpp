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
	class AlphaAnimation : public android::view::animation::Animation
	{
	public:
		// Fields
		
		AlphaAnimation(QAndroidJniObject obj);
		// Constructors
		AlphaAnimation(android::content::Context arg0, __JniBaseClass arg1);
		AlphaAnimation(jfloat arg0, jfloat arg1);
		AlphaAnimation() = default;
		
		// Methods
		jboolean willChangeBounds();
		jboolean willChangeTransformationMatrix();
	};
} // namespace android::view::animation

