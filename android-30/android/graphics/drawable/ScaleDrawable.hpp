#pragma once

#include "./DrawableWrapper.hpp"

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
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::graphics::drawable
{
	class ScaleDrawable : public android::graphics::drawable::DrawableWrapper
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScaleDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::DrawableWrapper(className, sig, std::forward<Ts>(agv)...) {}
		ScaleDrawable(QAndroidJniObject obj);
		
		// Constructors
		ScaleDrawable(android::graphics::drawable::Drawable arg0, jint arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		void draw(android::graphics::Canvas arg0) const;
		jint getOpacity() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
	};
} // namespace android::graphics::drawable

