#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"

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

namespace android::widget
{
	class CheckedTextView : public android::widget::TextView
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CheckedTextView(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		CheckedTextView(QJniObject obj);
		
		// Constructors
		CheckedTextView(android::content::Context arg0);
		CheckedTextView(android::content::Context arg0, __JniBaseClass arg1);
		CheckedTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		CheckedTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		jstring getAccessibilityClassName();
		android::graphics::drawable::Drawable getCheckMarkDrawable();
		android::graphics::BlendMode getCheckMarkTintBlendMode();
		android::content::res::ColorStateList getCheckMarkTintList();
		android::graphics::PorterDuff_Mode getCheckMarkTintMode();
		jboolean isChecked();
		void jumpDrawablesToCurrentState();
		void onRestoreInstanceState(__JniBaseClass arg0);
		void onRtlPropertiesChanged(jint arg0);
		__JniBaseClass onSaveInstanceState();
		void setCheckMarkDrawable(android::graphics::drawable::Drawable arg0);
		void setCheckMarkDrawable(jint arg0);
		void setCheckMarkTintBlendMode(android::graphics::BlendMode arg0);
		void setCheckMarkTintList(android::content::res::ColorStateList arg0);
		void setCheckMarkTintMode(android::graphics::PorterDuff_Mode arg0);
		void setChecked(jboolean arg0);
		void setVisibility(jint arg0);
		void toggle();
	};
} // namespace android::widget

