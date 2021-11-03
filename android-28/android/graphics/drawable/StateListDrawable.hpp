#pragma once

#include "../../../JObject.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer.hpp"

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
	class StateListDrawable : public android::graphics::drawable::DrawableContainer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StateListDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::DrawableContainer(className, sig, std::forward<Ts>(agv)...) {}
		StateListDrawable(QAndroidJniObject obj);
		
		// Constructors
		StateListDrawable();
		
		// Methods
		void addState(jintArray arg0, android::graphics::drawable::Drawable arg1);
		void applyTheme(android::content::res::Resources_Theme arg0);
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3);
		jboolean isStateful();
		android::graphics::drawable::Drawable mutate();
	};
} // namespace android::graphics::drawable

