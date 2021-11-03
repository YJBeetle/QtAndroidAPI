#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view::animation
{
	class Animation;
}
namespace android::view::animation
{
	class LayoutAnimationController_AnimationParameters;
}
namespace java::util
{
	class Random;
}

namespace android::view::animation
{
	class LayoutAnimationController : public JObject
	{
	public:
		// Fields
		static jint ORDER_NORMAL();
		static jint ORDER_RANDOM();
		static jint ORDER_REVERSE();
		
		// QJniObject forward
		template<typename ...Ts> explicit LayoutAnimationController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LayoutAnimationController(QJniObject obj);
		
		// Constructors
		LayoutAnimationController(android::view::animation::Animation arg0);
		LayoutAnimationController(android::content::Context arg0, JObject arg1);
		LayoutAnimationController(android::view::animation::Animation arg0, jfloat arg1);
		
		// Methods
		android::view::animation::Animation getAnimation() const;
		android::view::animation::Animation getAnimationForView(android::view::View arg0) const;
		jfloat getDelay() const;
		JObject getInterpolator() const;
		jint getOrder() const;
		jboolean isDone() const;
		void setAnimation(android::view::animation::Animation arg0) const;
		void setAnimation(android::content::Context arg0, jint arg1) const;
		void setDelay(jfloat arg0) const;
		void setInterpolator(JObject arg0) const;
		void setInterpolator(android::content::Context arg0, jint arg1) const;
		void setOrder(jint arg0) const;
		void start() const;
		jboolean willOverlap() const;
	};
} // namespace android::view::animation

