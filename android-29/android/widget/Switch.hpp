#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./Button.hpp"
#include "./CompoundButton.hpp"

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

namespace android::widget
{
	class Switch : public android::widget::CompoundButton
	{
	public:
		// Fields
		
		Switch(QAndroidJniObject obj);
		// Constructors
		Switch(android::content::Context &arg0);
		Switch(android::content::Context &arg0, __JniBaseClass &arg1);
		Switch(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		Switch(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		Switch() = default;
		
		// Methods
		void draw(android::graphics::Canvas arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		jstring getAccessibilityClassName();
		jint getCompoundPaddingLeft();
		jint getCompoundPaddingRight();
		jboolean getShowText();
		jboolean getSplitTrack();
		jint getSwitchMinWidth();
		jint getSwitchPadding();
		jstring getTextOff();
		jstring getTextOn();
		QAndroidJniObject getThumbDrawable();
		jint getThumbTextPadding();
		QAndroidJniObject getThumbTintBlendMode();
		QAndroidJniObject getThumbTintList();
		QAndroidJniObject getThumbTintMode();
		QAndroidJniObject getTrackDrawable();
		QAndroidJniObject getTrackTintBlendMode();
		QAndroidJniObject getTrackTintList();
		QAndroidJniObject getTrackTintMode();
		void jumpDrawablesToCurrentState();
		void onMeasure(jint arg0, jint arg1);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setChecked(jboolean arg0);
		void setShowText(jboolean arg0);
		void setSplitTrack(jboolean arg0);
		void setSwitchMinWidth(jint arg0);
		void setSwitchPadding(jint arg0);
		void setSwitchTextAppearance(android::content::Context arg0, jint arg1);
		void setSwitchTypeface(android::graphics::Typeface arg0);
		void setSwitchTypeface(android::graphics::Typeface arg0, jint arg1);
		void setTextOff(jstring arg0);
		void setTextOff(const QString &arg0);
		void setTextOn(jstring arg0);
		void setTextOn(const QString &arg0);
		void setThumbDrawable(android::graphics::drawable::Drawable arg0);
		void setThumbResource(jint arg0);
		void setThumbTextPadding(jint arg0);
		void setThumbTintBlendMode(android::graphics::BlendMode arg0);
		void setThumbTintList(android::content::res::ColorStateList arg0);
		void setThumbTintMode(android::graphics::PorterDuff_Mode arg0);
		void setTrackDrawable(android::graphics::drawable::Drawable arg0);
		void setTrackResource(jint arg0);
		void setTrackTintBlendMode(android::graphics::BlendMode arg0);
		void setTrackTintList(android::content::res::ColorStateList arg0);
		void setTrackTintMode(android::graphics::PorterDuff_Mode arg0);
		void toggle();
	};
} // namespace android::widget

