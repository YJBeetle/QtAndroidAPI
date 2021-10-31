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
namespace android::widget
{
	class LinearLayout_LayoutParams;
}
namespace android::widget
{
	class TableLayout_LayoutParams;
}

namespace android::widget
{
	class TableLayout : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		TableLayout(QAndroidJniObject obj);
		// Constructors
		TableLayout(android::content::Context arg0);
		TableLayout(android::content::Context arg0, __JniBaseClass arg1);
		TableLayout() = default;
		
		// Methods
		void addView(android::view::View arg0);
		void addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void addView(android::view::View arg0, jint arg1);
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2);
		QAndroidJniObject generateLayoutParams(__JniBaseClass arg0);
		jstring getAccessibilityClassName();
		jboolean isColumnCollapsed(jint arg0);
		jboolean isColumnShrinkable(jint arg0);
		jboolean isColumnStretchable(jint arg0);
		jboolean isShrinkAllColumns();
		jboolean isStretchAllColumns();
		void requestLayout();
		void setColumnCollapsed(jint arg0, jboolean arg1);
		void setColumnShrinkable(jint arg0, jboolean arg1);
		void setColumnStretchable(jint arg0, jboolean arg1);
		void setOnHierarchyChangeListener(__JniBaseClass arg0);
		void setShrinkAllColumns(jboolean arg0);
		void setStretchAllColumns(jboolean arg0);
	};
} // namespace android::widget

