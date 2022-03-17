#pragma once

#include "./TextView.def.hpp"

class JIntArray;
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
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
	class PorterDuff_Mode;
}
namespace android::graphics::drawable
{
	class Drawable;
}
class JString;

namespace android::widget
{
	class CheckedTextView : public android::widget::TextView
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CheckedTextView(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		CheckedTextView(QAndroidJniObject obj) : android::widget::TextView(obj) {}
		
		// Constructors
		CheckedTextView(android::content::Context arg0);
		CheckedTextView(android::content::Context arg0, JObject arg1);
		CheckedTextView(android::content::Context arg0, JObject arg1, jint arg2);
		CheckedTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void drawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		JString getAccessibilityClassName() const;
		android::graphics::drawable::Drawable getCheckMarkDrawable() const;
		android::graphics::BlendMode getCheckMarkTintBlendMode() const;
		android::content::res::ColorStateList getCheckMarkTintList() const;
		android::graphics::PorterDuff_Mode getCheckMarkTintMode() const;
		jboolean isChecked() const;
		void jumpDrawablesToCurrentState() const;
		void onRestoreInstanceState(JObject arg0) const;
		void onRtlPropertiesChanged(jint arg0) const;
		JObject onSaveInstanceState() const;
		void setCheckMarkDrawable(android::graphics::drawable::Drawable arg0) const;
		void setCheckMarkDrawable(jint arg0) const;
		void setCheckMarkTintBlendMode(android::graphics::BlendMode arg0) const;
		void setCheckMarkTintList(android::content::res::ColorStateList arg0) const;
		void setCheckMarkTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setChecked(jboolean arg0) const;
		void setVisibility(jint arg0) const;
		void toggle() const;
	};
} // namespace android::widget

