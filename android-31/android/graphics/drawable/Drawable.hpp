#pragma once

#include "../../../JObject.hpp"

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
	class BitmapFactory_Options;
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
	class PorterDuff_Mode;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Region;
}
namespace android::graphics::drawable
{
	class Drawable_ConstantState;
}
namespace android::util
{
	class TypedValue;
}
namespace java::io
{
	class InputStream;
}
class JString;

namespace android::graphics::drawable
{
	class Drawable : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Drawable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Drawable(QAndroidJniObject obj);
		
		// Constructors
		Drawable();
		
		// Methods
		static android::graphics::drawable::Drawable createFromPath(JString arg0);
		static android::graphics::drawable::Drawable createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, JString arg3);
		static android::graphics::drawable::Drawable createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, JString arg3, android::graphics::BitmapFactory_Options arg4);
		static android::graphics::drawable::Drawable createFromStream(java::io::InputStream arg0, JString arg1);
		static android::graphics::drawable::Drawable createFromXml(android::content::res::Resources arg0, JObject arg1);
		static android::graphics::drawable::Drawable createFromXml(android::content::res::Resources arg0, JObject arg1, android::content::res::Resources_Theme arg2);
		static android::graphics::drawable::Drawable createFromXmlInner(android::content::res::Resources arg0, JObject arg1, JObject arg2);
		static android::graphics::drawable::Drawable createFromXmlInner(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3);
		static jint resolveOpacity(jint arg0, jint arg1);
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void clearColorFilter();
		android::graphics::Rect copyBounds();
		void copyBounds(android::graphics::Rect arg0);
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		android::graphics::Rect getBounds();
		JObject getCallback();
		jint getChangingConfigurations();
		android::graphics::ColorFilter getColorFilter();
		android::graphics::drawable::Drawable_ConstantState getConstantState();
		android::graphics::drawable::Drawable getCurrent();
		android::graphics::Rect getDirtyBounds();
		void getHotspotBounds(android::graphics::Rect arg0);
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getLayoutDirection();
		jint getLevel();
		jint getMinimumHeight();
		jint getMinimumWidth();
		jint getOpacity();
		android::graphics::Insets getOpticalInsets();
		void getOutline(android::graphics::Outline arg0);
		jboolean getPadding(android::graphics::Rect arg0);
		JIntArray getState();
		android::graphics::Region getTransparentRegion();
		jboolean hasFocusStateSpecified();
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2);
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3);
		void invalidateSelf();
		jboolean isAutoMirrored();
		jboolean isFilterBitmap();
		jboolean isProjected();
		jboolean isStateful();
		jboolean isVisible();
		void jumpToCurrentState();
		android::graphics::drawable::Drawable mutate();
		jboolean onLayoutDirectionChanged(jint arg0);
		void scheduleSelf(JObject arg0, jlong arg1);
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setBounds(android::graphics::Rect arg0);
		void setBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setCallback(JObject arg0);
		void setChangingConfigurations(jint arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1);
		void setDither(jboolean arg0);
		void setFilterBitmap(jboolean arg0);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean setLayoutDirection(jint arg0);
		jboolean setLevel(jint arg0);
		jboolean setState(JIntArray arg0);
		void setTint(jint arg0);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
		void setTintMode(android::graphics::PorterDuff_Mode arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void unscheduleSelf(JObject arg0);
	};
} // namespace android::graphics::drawable

