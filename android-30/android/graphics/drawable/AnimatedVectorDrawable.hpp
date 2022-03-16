#pragma once

#include "./Drawable.hpp"

class JIntArray;
namespace android::content::res
{
	class ColorStateList;
}
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
	class BlendMode;
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
	class Insets;
}
namespace android::graphics
{
	class Outline;
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
	class Drawable;
}
namespace android::graphics::drawable
{
	class Drawable_ConstantState;
}

namespace android::graphics::drawable
{
	class AnimatedVectorDrawable : public android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnimatedVectorDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		AnimatedVectorDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
		
		// Constructors
		AnimatedVectorDrawable();
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void clearAnimationCallbacks() const;
		void draw(android::graphics::Canvas arg0) const;
		jint getAlpha() const;
		jint getChangingConfigurations() const;
		android::graphics::ColorFilter getColorFilter() const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getOpacity() const;
		android::graphics::Insets getOpticalInsets() const;
		void getOutline(android::graphics::Outline arg0) const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isRunning() const;
		jboolean isStateful() const;
		android::graphics::drawable::Drawable mutate() const;
		jboolean onLayoutDirectionChanged(jint arg0) const;
		void registerAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0) const;
		void reset() const;
		void setAlpha(jint arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setHotspot(jfloat arg0, jfloat arg1) const;
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setTintBlendMode(android::graphics::BlendMode arg0) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
		jboolean setVisible(jboolean arg0, jboolean arg1) const;
		void start() const;
		void stop() const;
		jboolean unregisterAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0) const;
	};
} // namespace android::graphics::drawable

