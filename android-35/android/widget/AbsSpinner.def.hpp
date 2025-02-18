#pragma once

#include "./AdapterView.def.hpp"

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
class JString;

namespace android::widget
{
	class AbsSpinner : public android::widget::AdapterView
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbsSpinner(const char *className, const char *sig, Ts...agv) : android::widget::AdapterView(className, sig, std::forward<Ts>(agv)...) {}
		AbsSpinner(QJniObject obj) : android::widget::AdapterView(obj) {}
		
		// Constructors
		AbsSpinner(android::content::Context arg0);
		AbsSpinner(android::content::Context arg0, JObject arg1);
		AbsSpinner(android::content::Context arg0, JObject arg1, jint arg2);
		AbsSpinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void autofill(android::view::autofill::AutofillValue arg0) const;
		JString getAccessibilityClassName() const;
		JObject getAdapter() const;
		jint getAutofillType() const;
		android::view::autofill::AutofillValue getAutofillValue() const;
		jint getCount() const;
		android::view::View getSelectedView() const;
		void onRestoreInstanceState(JObject arg0) const;
		JObject onSaveInstanceState() const;
		jint pointToPosition(jint arg0, jint arg1) const;
		void requestLayout() const;
		void setAdapter(JObject arg0) const;
		void setSelection(jint arg0) const;
		void setSelection(jint arg0, jboolean arg1) const;
	};
} // namespace android::widget

