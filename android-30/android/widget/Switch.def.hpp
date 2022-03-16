#pragma once

#include "./CompoundButton.def.hpp"

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
class JString;

namespace android::widget
{
	class Switch : public android::widget::CompoundButton
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Switch(const char *className, const char *sig, Ts...agv) : android::widget::CompoundButton(className, sig, std::forward<Ts>(agv)...) {}
		Switch(QJniObject obj) : android::widget::CompoundButton(obj) {}
		
		// Constructors
		Switch(android::content::Context arg0);
		Switch(android::content::Context arg0, JObject arg1);
		Switch(android::content::Context arg0, JObject arg1, jint arg2);
		Switch(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void draw(android::graphics::Canvas arg0) const;
		void drawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		JString getAccessibilityClassName() const;
		jint getCompoundPaddingLeft() const;
		jint getCompoundPaddingRight() const;
		jboolean getShowText() const;
		jboolean getSplitTrack() const;
		jint getSwitchMinWidth() const;
		jint getSwitchPadding() const;
		JString getTextOff() const;
		JString getTextOn() const;
		android::graphics::drawable::Drawable getThumbDrawable() const;
		jint getThumbTextPadding() const;
		android::graphics::BlendMode getThumbTintBlendMode() const;
		android::content::res::ColorStateList getThumbTintList() const;
		android::graphics::PorterDuff_Mode getThumbTintMode() const;
		android::graphics::drawable::Drawable getTrackDrawable() const;
		android::graphics::BlendMode getTrackTintBlendMode() const;
		android::content::res::ColorStateList getTrackTintList() const;
		android::graphics::PorterDuff_Mode getTrackTintMode() const;
		void jumpDrawablesToCurrentState() const;
		void onMeasure(jint arg0, jint arg1) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void setChecked(jboolean arg0) const;
		void setShowText(jboolean arg0) const;
		void setSplitTrack(jboolean arg0) const;
		void setSwitchMinWidth(jint arg0) const;
		void setSwitchPadding(jint arg0) const;
		void setSwitchTextAppearance(android::content::Context arg0, jint arg1) const;
		void setSwitchTypeface(android::graphics::Typeface arg0) const;
		void setSwitchTypeface(android::graphics::Typeface arg0, jint arg1) const;
		void setTextOff(JString arg0) const;
		void setTextOn(JString arg0) const;
		void setThumbDrawable(android::graphics::drawable::Drawable arg0) const;
		void setThumbResource(jint arg0) const;
		void setThumbTextPadding(jint arg0) const;
		void setThumbTintBlendMode(android::graphics::BlendMode arg0) const;
		void setThumbTintList(android::content::res::ColorStateList arg0) const;
		void setThumbTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setTrackDrawable(android::graphics::drawable::Drawable arg0) const;
		void setTrackResource(jint arg0) const;
		void setTrackTintBlendMode(android::graphics::BlendMode arg0) const;
		void setTrackTintList(android::content::res::ColorStateList arg0) const;
		void setTrackTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void toggle() const;
	};
} // namespace android::widget

