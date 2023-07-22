#pragma once

#include "./DrawableWrapper.def.hpp"

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
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::graphics::drawable
{
	class ClipDrawable : public android::graphics::drawable::DrawableWrapper
	{
	public:
		// Fields
		static jint HORIZONTAL();
		static jint VERTICAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClipDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::DrawableWrapper(className, sig, std::forward<Ts>(agv)...) {}
		ClipDrawable(QAndroidJniObject obj) : android::graphics::drawable::DrawableWrapper(obj) {}
		
		// Constructors
		ClipDrawable(android::graphics::drawable::Drawable arg0, jint arg1, jint arg2);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		void draw(android::graphics::Canvas arg0) const;
		jint getOpacity() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
	};
} // namespace android::graphics::drawable

