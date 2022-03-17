#pragma once

#include "./Animation.def.hpp"

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
class JObject;

namespace android::view::animation
{
	class AnimationSet : public android::view::animation::Animation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnimationSet(const char *className, const char *sig, Ts...agv) : android::view::animation::Animation(className, sig, std::forward<Ts>(agv)...) {}
		AnimationSet(QAndroidJniObject obj) : android::view::animation::Animation(obj) {}
		
		// Constructors
		AnimationSet(jboolean arg0);
		AnimationSet(android::content::Context arg0, JObject arg1);
		
		// Methods
		void addAnimation(android::view::animation::Animation arg0) const;
		jlong computeDurationHint() const;
		JObject getAnimations() const;
		jlong getDuration() const;
		jlong getStartTime() const;
		jboolean getTransformation(jlong arg0, android::view::animation::Transformation arg1) const;
		void initialize(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void reset() const;
		void restrictDuration(jlong arg0) const;
		void scaleCurrentDuration(jfloat arg0) const;
		void setDuration(jlong arg0) const;
		void setFillAfter(jboolean arg0) const;
		void setFillBefore(jboolean arg0) const;
		void setRepeatMode(jint arg0) const;
		void setStartOffset(jlong arg0) const;
		void setStartTime(jlong arg0) const;
		jboolean willChangeBounds() const;
		jboolean willChangeTransformationMatrix() const;
	};
} // namespace android::view::animation

