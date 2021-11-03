#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"

namespace android::content
{
	class Context;
}
namespace android::util
{
	class SparseArray;
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
	class AbsSpinner : public android::widget::AdapterView
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbsSpinner(const char *className, const char *sig, Ts...agv) : android::widget::AdapterView(className, sig, std::forward<Ts>(agv)...) {}
		AbsSpinner(QJniObject obj);
		
		// Constructors
		AbsSpinner(android::content::Context arg0);
		AbsSpinner(android::content::Context arg0, JObject arg1);
		AbsSpinner(android::content::Context arg0, JObject arg1, jint arg2);
		AbsSpinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void autofill(android::view::autofill::AutofillValue arg0);
		jstring getAccessibilityClassName();
		JObject getAdapter();
		jint getAutofillType();
		android::view::autofill::AutofillValue getAutofillValue();
		jint getCount();
		android::view::View getSelectedView();
		void onRestoreInstanceState(JObject arg0);
		JObject onSaveInstanceState();
		jint pointToPosition(jint arg0, jint arg1);
		void requestLayout();
		void setAdapter(JObject arg0);
		void setSelection(jint arg0);
		void setSelection(jint arg0, jboolean arg1);
	};
} // namespace android::widget

