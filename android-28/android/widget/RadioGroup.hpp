#pragma once

#include "./LinearLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view
{
	class ViewStructure;
}
namespace android::view::autofill
{
	class AutofillValue;
}
namespace android::widget
{
	class LinearLayout_LayoutParams;
}
namespace android::widget
{
	class RadioGroup_LayoutParams;
}
class JString;

namespace android::widget
{
	class RadioGroup : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RadioGroup(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		RadioGroup(QAndroidJniObject obj);
		
		// Constructors
		RadioGroup(android::content::Context arg0);
		RadioGroup(android::content::Context arg0, JObject arg1);
		
		// Methods
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const;
		void autofill(android::view::autofill::AutofillValue arg0) const;
		void check(jint arg0) const;
		void clearCheck() const;
		android::widget::RadioGroup_LayoutParams generateLayoutParams(JObject arg0) const;
		JString getAccessibilityClassName() const;
		jint getAutofillType() const;
		android::view::autofill::AutofillValue getAutofillValue() const;
		jint getCheckedRadioButtonId() const;
		void onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const;
		void setOnCheckedChangeListener(JObject arg0) const;
		void setOnHierarchyChangeListener(JObject arg0) const;
	};
} // namespace android::widget

