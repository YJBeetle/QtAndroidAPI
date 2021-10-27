#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Animation.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::animation
{
	class Animation;
}
namespace android::view::animation
{
	class Transformation;
}

namespace android::view::animation
{
	class AnimationSet : public android::view::animation::Animation
	{
	public:
		// Fields
		
		AnimationSet(QAndroidJniObject obj);
		// Constructors
		AnimationSet(jboolean &arg0);
		AnimationSet(android::content::Context &arg0, __JniBaseClass &arg1);
		AnimationSet() = default;
		
		// Methods
		void addAnimation(android::view::animation::Animation arg0);
		jlong computeDurationHint();
		QAndroidJniObject getAnimations();
		jlong getDuration();
		jlong getStartTime();
		jboolean getTransformation(jlong arg0, android::view::animation::Transformation arg1);
		void initialize(jint arg0, jint arg1, jint arg2, jint arg3);
		void reset();
		void restrictDuration(jlong arg0);
		void scaleCurrentDuration(jfloat arg0);
		void setDuration(jlong arg0);
		void setFillAfter(jboolean arg0);
		void setFillBefore(jboolean arg0);
		void setRepeatMode(jint arg0);
		void setStartOffset(jlong arg0);
		void setStartTime(jlong arg0);
		jboolean willChangeBounds();
		jboolean willChangeTransformationMatrix();
	};
} // namespace android::view::animation

