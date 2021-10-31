#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit AnimatedVectorDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::Drawable(className, sig, std::forward<Ts>(agv)...) {}
		AnimatedVectorDrawable(QJniObject obj);
		
		// Constructors
		AnimatedVectorDrawable();
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void clearAnimationCallbacks();
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		android::graphics::ColorFilter getColorFilter();
		android::graphics::drawable::Drawable_ConstantState getConstantState();
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		android::graphics::Insets getOpticalInsets();
		void getOutline(android::graphics::Outline arg0);
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		jboolean isRunning();
		jboolean isStateful();
		android::graphics::drawable::Drawable mutate();
		jboolean onLayoutDirectionChanged(jint arg0);
		void registerAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0);
		void reset();
		void setAlpha(jint arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void start();
		void stop();
		jboolean unregisterAnimationCallback(android::graphics::drawable::Animatable2_AnimationCallback arg0);
	};
} // namespace android::graphics::drawable

