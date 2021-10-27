#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./Button.hpp"

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
namespace android::view::autofill
{
	class AutofillValue;
}

namespace android::widget
{
	class CompoundButton : public android::widget::Button
	{
	public:
		// Fields
		
		CompoundButton(QAndroidJniObject obj);
		// Constructors
		CompoundButton(android::content::Context &arg0);
		CompoundButton(android::content::Context &arg0, __JniBaseClass &arg1);
		CompoundButton(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		CompoundButton(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		CompoundButton() = default;
		
		// Methods
		void autofill(android::view::autofill::AutofillValue arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		jstring getAccessibilityClassName();
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		QAndroidJniObject getButtonDrawable();
		QAndroidJniObject getButtonTintBlendMode();
		QAndroidJniObject getButtonTintList();
		QAndroidJniObject getButtonTintMode();
		jint getCompoundPaddingLeft();
		jint getCompoundPaddingRight();
		jboolean isChecked();
		void jumpDrawablesToCurrentState();
		void onRestoreInstanceState(__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		jboolean performClick();
		void setButtonDrawable(android::graphics::drawable::Drawable arg0);
		void setButtonDrawable(jint arg0);
		void setButtonTintBlendMode(android::graphics::BlendMode arg0);
		void setButtonTintList(android::content::res::ColorStateList arg0);
		void setButtonTintMode(android::graphics::PorterDuff_Mode arg0);
		void setChecked(jboolean arg0);
		void setOnCheckedChangeListener(__JniBaseClass arg0);
		void toggle();
	};
} // namespace android::widget

