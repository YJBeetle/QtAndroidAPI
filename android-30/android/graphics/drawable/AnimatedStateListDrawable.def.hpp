#pragma once

#include "./StateListDrawable.def.hpp"

class JIntArray;
namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::graphics::drawable
{
	class DrawableContainer_DrawableContainerState;
}

namespace android::graphics::drawable
{
	class AnimatedStateListDrawable : public android::graphics::drawable::StateListDrawable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnimatedStateListDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::StateListDrawable(className, sig, std::forward<Ts>(agv)...) {}
		AnimatedStateListDrawable(QAndroidJniObject obj) : android::graphics::drawable::StateListDrawable(obj) {}
		
		// Constructors
		AnimatedStateListDrawable();
		
		// Methods
		void addState(JIntArray arg0, android::graphics::drawable::Drawable arg1, jint arg2) const;
		void addTransition(jint arg0, jint arg1, android::graphics::drawable::Drawable arg2, jboolean arg3) const;
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isStateful() const;
		void jumpToCurrentState() const;
		android::graphics::drawable::Drawable mutate() const;
		jboolean setVisible(jboolean arg0, jboolean arg1) const;
	};
} // namespace android::graphics::drawable

