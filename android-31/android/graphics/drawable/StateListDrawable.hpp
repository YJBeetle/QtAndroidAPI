#pragma once

#include "./DrawableContainer.hpp"

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
		void addState(JIntArray arg0, android::graphics::drawable::Drawable arg1) const;
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jint findStateDrawableIndex(JIntArray arg0) const;
		jint getStateCount() const;
		android::graphics::drawable::Drawable getStateDrawable(jint arg0) const;
		JIntArray getStateSet(jint arg0) const;
		jboolean hasFocusStateSpecified() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isStateful() const;
		android::graphics::drawable::Drawable mutate() const;
	};
} // namespace android::graphics::drawable

