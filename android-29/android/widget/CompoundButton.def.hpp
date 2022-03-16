#pragma once

#include "./Button.def.hpp"

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
namespace android::view::autofill
{
	class AutofillValue;
}
class JString;

namespace android::widget
{
	class CompoundButton : public android::widget::Button
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CompoundButton(const char *className, const char *sig, Ts...agv) : android::widget::Button(className, sig, std::forward<Ts>(agv)...) {}
		CompoundButton(QJniObject obj) : android::widget::Button(obj) {}
		
		// Constructors
		CompoundButton(android::content::Context arg0);
		CompoundButton(android::content::Context arg0, JObject arg1);
		CompoundButton(android::content::Context arg0, JObject arg1, jint arg2);
		CompoundButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void autofill(android::view::autofill::AutofillValue arg0) const;
		void drawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		JString getAccessibilityClassName() const;
		jint getAutofillType() const;
		android::view::autofill::AutofillValue getAutofillValue() const;
		android::graphics::drawable::Drawable getButtonDrawable() const;
		android::graphics::BlendMode getButtonTintBlendMode() const;
		android::content::res::ColorStateList getButtonTintList() const;
		android::graphics::PorterDuff_Mode getButtonTintMode() const;
		jint getCompoundPaddingLeft() const;
		jint getCompoundPaddingRight() const;
		jboolean isChecked() const;
		void jumpDrawablesToCurrentState() const;
		void onRestoreInstanceState(JObject arg0) const;
		JObject onSaveInstanceState() const;
		jboolean performClick() const;
		void setButtonDrawable(android::graphics::drawable::Drawable arg0) const;
		void setButtonDrawable(jint arg0) const;
		void setButtonTintBlendMode(android::graphics::BlendMode arg0) const;
		void setButtonTintList(android::content::res::ColorStateList arg0) const;
		void setButtonTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setChecked(jboolean arg0) const;
		void setOnCheckedChangeListener(JObject arg0) const;
		void toggle() const;
	};
} // namespace android::widget

