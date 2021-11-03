#pragma once

#include "./CompoundButton.hpp"

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
namespace android::graphics
{
	class Typeface;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class ViewStructure;
}
class JString;

namespace android::widget
{
	class Switch : public android::widget::CompoundButton
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Switch(const char *className, const char *sig, Ts...agv) : android::widget::CompoundButton(className, sig, std::forward<Ts>(agv)...) {}
		Switch(QJniObject obj);
		
		// Constructors
		Switch(android::content::Context arg0);
		Switch(android::content::Context arg0, JObject arg1);
		Switch(android::content::Context arg0, JObject arg1, jint arg2);
		Switch(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void draw(android::graphics::Canvas arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		JString getAccessibilityClassName();
		jint getCompoundPaddingLeft();
		jint getCompoundPaddingRight();
		jboolean getShowText();
		jboolean getSplitTrack();
		jint getSwitchMinWidth();
		jint getSwitchPadding();
		JString getTextOff();
		JString getTextOn();
		android::graphics::drawable::Drawable getThumbDrawable();
		jint getThumbTextPadding();
		android::content::res::ColorStateList getThumbTintList();
		android::graphics::PorterDuff_Mode getThumbTintMode();
		android::graphics::drawable::Drawable getTrackDrawable();
		android::content::res::ColorStateList getTrackTintList();
		android::graphics::PorterDuff_Mode getTrackTintMode();
		void jumpDrawablesToCurrentState();
		void onMeasure(jint arg0, jint arg1);
		void onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1);
		void onProvideStructure(android::view::ViewStructure arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setChecked(jboolean arg0);
		void setShowText(jboolean arg0);
		void setSplitTrack(jboolean arg0);
		void setSwitchMinWidth(jint arg0);
		void setSwitchPadding(jint arg0);
		void setSwitchTextAppearance(android::content::Context arg0, jint arg1);
		void setSwitchTypeface(android::graphics::Typeface arg0);
		void setSwitchTypeface(android::graphics::Typeface arg0, jint arg1);
		void setTextOff(JString arg0);
		void setTextOn(JString arg0);
		void setThumbDrawable(android::graphics::drawable::Drawable arg0);
		void setThumbResource(jint arg0);
		void setThumbTextPadding(jint arg0);
		void setThumbTintList(android::content::res::ColorStateList arg0);
		void setThumbTintMode(android::graphics::PorterDuff_Mode arg0);
		void setTrackDrawable(android::graphics::drawable::Drawable arg0);
		void setTrackResource(jint arg0);
		void setTrackTintList(android::content::res::ColorStateList arg0);
		void setTrackTintMode(android::graphics::PorterDuff_Mode arg0);
		void toggle();
	};
} // namespace android::widget

