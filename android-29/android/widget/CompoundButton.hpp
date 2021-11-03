#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CompoundButton(const char *className, const char *sig, Ts...agv) : android::widget::Button(className, sig, std::forward<Ts>(agv)...) {}
		CompoundButton(QAndroidJniObject obj);
		
		// Constructors
		CompoundButton(android::content::Context arg0);
		CompoundButton(android::content::Context arg0, JObject arg1);
		CompoundButton(android::content::Context arg0, JObject arg1, jint arg2);
		CompoundButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void autofill(android::view::autofill::AutofillValue arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		jstring getAccessibilityClassName();
		jint getAutofillType();
		android::view::autofill::AutofillValue getAutofillValue();
		android::graphics::drawable::Drawable getButtonDrawable();
		android::graphics::BlendMode getButtonTintBlendMode();
		android::content::res::ColorStateList getButtonTintList();
		android::graphics::PorterDuff_Mode getButtonTintMode();
		jint getCompoundPaddingLeft();
		jint getCompoundPaddingRight();
		jboolean isChecked();
		void jumpDrawablesToCurrentState();
		void onRestoreInstanceState(JObject arg0);
		JObject onSaveInstanceState();
		jboolean performClick();
		void setButtonDrawable(android::graphics::drawable::Drawable arg0);
		void setButtonDrawable(jint arg0);
		void setButtonTintBlendMode(android::graphics::BlendMode arg0);
		void setButtonTintList(android::content::res::ColorStateList arg0);
		void setButtonTintMode(android::graphics::PorterDuff_Mode arg0);
		void setChecked(jboolean arg0);
		void setOnCheckedChangeListener(JObject arg0);
		void toggle();
	};
} // namespace android::widget

