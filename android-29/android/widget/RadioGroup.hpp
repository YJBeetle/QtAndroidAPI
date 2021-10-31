#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RadioGroup(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		RadioGroup(QAndroidJniObject obj);
		
		// Constructors
		RadioGroup(android::content::Context arg0);
		RadioGroup(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2);
		void autofill(android::view::autofill::AutofillValue arg0);
		void check(jint arg0);
		void clearCheck();
		QAndroidJniObject generateLayoutParams(__JniBaseClass arg0);
		jstring getAccessibilityClassName();
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		jint getCheckedRadioButtonId();
		void setOnCheckedChangeListener(__JniBaseClass arg0);
		void setOnHierarchyChangeListener(__JniBaseClass arg0);
	};
} // namespace android::widget

