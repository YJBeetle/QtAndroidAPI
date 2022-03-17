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
	class Canvas;
}
namespace android::graphics
{
	class ColorFilter;
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
		Drawable(QAndroidJniObject obj) : JObject(obj) {}
		
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
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		jboolean canApplyTheme() const;
		void clearColorFilter() const;
		android::graphics::Rect copyBounds() const;
		void copyBounds(android::graphics::Rect arg0) const;
		void draw(android::graphics::Canvas arg0) const;
		jint getAlpha() const;
		android::graphics::Rect getBounds() const;
		JObject getCallback() const;
		jint getChangingConfigurations() const;
		android::graphics::ColorFilter getColorFilter() const;
		android::graphics::drawable::Drawable_ConstantState getConstantState() const;
		android::graphics::drawable::Drawable getCurrent() const;
		android::graphics::Rect getDirtyBounds() const;
		void getHotspotBounds(android::graphics::Rect arg0) const;
		jint getIntrinsicHeight() const;
		jint getIntrinsicWidth() const;
		jint getLayoutDirection() const;
		jint getLevel() const;
		jint getMinimumHeight() const;
		jint getMinimumWidth() const;
		jint getOpacity() const;
		void getOutline(android::graphics::Outline arg0) const;
		jboolean getPadding(android::graphics::Rect arg0) const;
		JIntArray getState() const;
		android::graphics::Region getTransparentRegion() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2) const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		void invalidateSelf() const;
		jboolean isAutoMirrored() const;
		jboolean isFilterBitmap() const;
		jboolean isStateful() const;
		jboolean isVisible() const;
		void jumpToCurrentState() const;
		android::graphics::drawable::Drawable mutate() const;
		jboolean onLayoutDirectionChanged(jint arg0) const;
		void scheduleSelf(JObject arg0, jlong arg1) const;
		void setAlpha(jint arg0) const;
		void setAutoMirrored(jboolean arg0) const;
		void setBounds(android::graphics::Rect arg0) const;
		void setBounds(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setCallback(JObject arg0) const;
		void setChangingConfigurations(jint arg0) const;
		void setColorFilter(android::graphics::ColorFilter arg0) const;
		void setColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1) const;
		void setDither(jboolean arg0) const;
		void setFilterBitmap(jboolean arg0) const;
		void setHotspot(jfloat arg0, jfloat arg1) const;
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean setLayoutDirection(jint arg0) const;
		jboolean setLevel(jint arg0) const;
		jboolean setState(JIntArray arg0) const;
		void setTint(jint arg0) const;
		void setTintList(android::content::res::ColorStateList arg0) const;
		void setTintMode(android::graphics::PorterDuff_Mode arg0) const;
		jboolean setVisible(jboolean arg0, jboolean arg1) const;
		void unscheduleSelf(JObject arg0) const;
	};
} // namespace android::graphics::drawable

