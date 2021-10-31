#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class ColorFilter;
}
namespace android::graphics::drawable
{
	class Animatable2_AnimationCallback;
}

namespace android::graphics::drawable
{
	class AnimatedImageDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		static jint REPEAT_INFINITE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnimatedImageDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		AnimatedImageDrawable(QAndroidJniObject obj);
		
		// Constructors
		AnimatedImageDrawable();
		
		// Methods
		void clearAnimationCallbacks();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		android::graphics::ColorFilter getColorFilter();
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		jint getRepeatCount();
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		jboolean isAutoMirrored();
		jboolean isRunning();
		jboolean onLayoutDirectionChanged(jint arg0);
		void registerAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0);
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setRepeatCount(jint arg0);
		void start();
		void stop();
		jboolean unregisterAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0);
	};
} // namespace android::graphics::drawable

