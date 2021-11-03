#pragma once

#include "../../../JObject.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer.hpp"
#include "./StateListDrawable.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit AnimatedStateListDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::StateListDrawable(className, sig, std::forward<Ts>(agv)...) {}
		AnimatedStateListDrawable(QJniObject obj);
		
		// Constructors
		AnimatedStateListDrawable();
		
		// Methods
		void addState(jintArray arg0, android::graphics::drawable::Drawable arg1, jint arg2);
		void addTransition(jint arg0, jint arg1, android::graphics::drawable::Drawable arg2, jboolean arg3);
		void applyTheme(android::content::res::Resources_Theme arg0);
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3);
		jboolean isStateful();
		void jumpToCurrentState();
		android::graphics::drawable::Drawable mutate();
		jboolean setVisible(jboolean arg0, jboolean arg1);
	};
} // namespace android::graphics::drawable

