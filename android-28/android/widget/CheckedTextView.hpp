#pragma once

#include "./TextView.hpp"

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
		CheckedTextView(QAndroidJniObject obj);
		
		// Constructors
		CheckedTextView(android::content::Context arg0);
		CheckedTextView(android::content::Context arg0, JObject arg1);
		CheckedTextView(android::content::Context arg0, JObject arg1, jint arg2);
		CheckedTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		JString getAccessibilityClassName();
		android::graphics::drawable::Drawable getCheckMarkDrawable();
		android::content::res::ColorStateList getCheckMarkTintList();
		android::graphics::PorterDuff_Mode getCheckMarkTintMode();
		jboolean isChecked();
		void jumpDrawablesToCurrentState();
		void onRestoreInstanceState(JObject arg0);
		void onRtlPropertiesChanged(jint arg0);
		JObject onSaveInstanceState();
		void setCheckMarkDrawable(android::graphics::drawable::Drawable arg0);
		void setCheckMarkDrawable(jint arg0);
		void setCheckMarkTintList(android::content::res::ColorStateList arg0);
		void setCheckMarkTintMode(android::graphics::PorterDuff_Mode arg0);
		void setChecked(jboolean arg0);
		void setVisibility(jint arg0);
		void toggle();
	};
} // namespace android::widget

