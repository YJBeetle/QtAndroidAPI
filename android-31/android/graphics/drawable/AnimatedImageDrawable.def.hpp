#pragma once

#include "./Drawable.def.hpp"

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
namespace android::graphics
{
	class Rect;
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
		AnimatedImageDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
		
		// Constructors
		AnimatedImageDrawable();
		
		// Methods
		void clearAnimationCallbacks() const;
		void draw(android::graphics::Canvas arg0) const;
		jint getAlpha() const;
		android::graphics::ColorFilter getColorFilter() const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getOpacity() const;
		jint getRepeatCount() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isAutoMirrored() const;
		jboolean isRunning() const;
		jboolean onLayoutDirectionChanged(jint arg0) const;
		void registerAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0) const;
		void setAlpha(jint arg0) const;
		void setAutoMirrored(jboolean arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setRepeatCount(jint arg0) const;
		void start() const;
		void stop() const;
		jboolean unregisterAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0) const;
	};
} // namespace android::graphics::drawable

