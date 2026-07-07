#pragma once

#include "./LinearLayout.def.hpp"

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
namespace android::widget
{
	class LinearLayout_LayoutParams;
}
namespace android::widget
{
	class TableLayout_LayoutParams;
}
class JString;

namespace android::widget
{
	class TableLayout : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TableLayout(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		TableLayout(QJniObject obj) : android::widget::LinearLayout(obj) {}
		
		// Constructors
		TableLayout(android::content::Context arg0);
		TableLayout(android::content::Context arg0, JObject arg1);
		
		// Methods
		void addView(android::view::View arg0) const;
		void addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void addView(android::view::View arg0, jint arg1) const;
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const;
		android::widget::TableLayout_LayoutParams generateLayoutParams(JObject arg0) const;
		JString getAccessibilityClassName() const;
		jboolean isColumnCollapsed(jint arg0) const;
		jboolean isColumnShrinkable(jint arg0) const;
		jboolean isColumnStretchable(jint arg0) const;
		jboolean isShrinkAllColumns() const;
		jboolean isStretchAllColumns() const;
		void requestLayout() const;
		void setColumnCollapsed(jint arg0, jboolean arg1) const;
		void setColumnShrinkable(jint arg0, jboolean arg1) const;
		void setColumnStretchable(jint arg0, jboolean arg1) const;
		void setOnHierarchyChangeListener(JObject arg0) const;
		void setShrinkAllColumns(jboolean arg0) const;
		void setStretchAllColumns(jboolean arg0) const;
	};
} // namespace android::widget

