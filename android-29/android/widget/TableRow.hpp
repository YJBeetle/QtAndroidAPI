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
namespace android::widget
{
	class LinearLayout_LayoutParams;
}
namespace android::widget
{
	class TableRow_LayoutParams;
}
class JString;

namespace android::widget
{
	class TableRow : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TableRow(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		TableRow(QAndroidJniObject obj) : android::widget::LinearLayout(obj) {}
		
		// Constructors
		TableRow(android::content::Context arg0);
		TableRow(android::content::Context arg0, JObject arg1);
		
		// Methods
		android::widget::TableRow_LayoutParams generateLayoutParams(JObject arg0) const;
		JString getAccessibilityClassName() const;
		android::view::View getVirtualChildAt(jint arg0) const;
		jint getVirtualChildCount() const;
		void setOnHierarchyChangeListener(JObject arg0) const;
	};
} // namespace android::widget

