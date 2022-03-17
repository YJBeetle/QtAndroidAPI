#pragma once

#include "./ProgressBar.def.hpp"

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
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
class JString;

namespace android::widget
{
	class AbsSeekBar : public android::widget::ProgressBar
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbsSeekBar(const char *className, const char *sig, Ts...agv) : android::widget::ProgressBar(className, sig, std::forward<Ts>(agv)...) {}
		AbsSeekBar(QAndroidJniObject obj) : android::widget::ProgressBar(obj) {}
		
		// Constructors
		AbsSeekBar(android::content::Context arg0);
		AbsSeekBar(android::content::Context arg0, JObject arg1);
		AbsSeekBar(android::content::Context arg0, JObject arg1, jint arg2);
		AbsSeekBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void drawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		JString getAccessibilityClassName() const;
		jint getKeyProgressIncrement() const;
		jboolean getSplitTrack() const;
		android::graphics::drawable::Drawable getThumb() const;
		jint getThumbOffset() const;
		android::content::res::ColorStateList getThumbTintList() const;
		android::graphics::PorterDuff_Mode getThumbTintMode() const;
		android::graphics::drawable::Drawable getTickMark() const;
		android::content::res::ColorStateList getTickMarkTintList() const;
		android::graphics::PorterDuff_Mode getTickMarkTintMode() const;
		void jumpDrawablesToCurrentState() const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		void onRtlPropertiesChanged(jint arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void setKeyProgressIncrement(jint arg0) const;
		void setMax(jint arg0) const;
		void setMin(jint arg0) const;
		void setSplitTrack(jboolean arg0) const;
		void setThumb(android::graphics::drawable::Drawable arg0) const;
		void setThumbOffset(jint arg0) const;
		void setThumbTintList(android::content::res::ColorStateList arg0) const;
		void setThumbTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setTickMark(android::graphics::drawable::Drawable arg0) const;
		void setTickMarkTintList(android::content::res::ColorStateList arg0) const;
		void setTickMarkTintMode(android::graphics::PorterDuff_Mode arg0) const;
	};
} // namespace android::widget

