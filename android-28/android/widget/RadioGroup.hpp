#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
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

namespace android::widget
{
	class RadioGroup : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RadioGroup(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		RadioGroup(QJniObject obj);
		
		// Constructors
		RadioGroup(android::content::Context arg0);
		RadioGroup(android::content::Context arg0, JObject arg1);
		
		// Methods
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2);
		void autofill(android::view::autofill::AutofillValue arg0);
		void check(jint arg0);
		void clearCheck();
		android::widget::RadioGroup_LayoutParams generateLayoutParams(JObject arg0);
		jstring getAccessibilityClassName();
		jint getAutofillType();
		android::view::autofill::AutofillValue getAutofillValue();
		jint getCheckedRadioButtonId();
		void onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1);
		void setOnCheckedChangeListener(JObject arg0);
		void setOnHierarchyChangeListener(JObject arg0);
	};
} // namespace android::widget

