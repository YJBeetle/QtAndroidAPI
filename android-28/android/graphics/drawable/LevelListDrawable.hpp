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
	class LevelListDrawable : public android::graphics::drawable::DrawableContainer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LevelListDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::DrawableContainer(className, sig, std::forward<Ts>(agv)...) {}
		LevelListDrawable(QJniObject obj);
		
		// Constructors
		LevelListDrawable();
		
		// Methods
		void addLevel(jint arg0, jint arg1, android::graphics::drawable::Drawable arg2);
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3);
		android::graphics::drawable::Drawable mutate();
	};
} // namespace android::graphics::drawable

