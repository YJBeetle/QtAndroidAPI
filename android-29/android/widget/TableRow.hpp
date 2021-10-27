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
	class TableRow_LayoutParams;
}

namespace android::widget
{
	class TableRow : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		TableRow(QAndroidJniObject obj);
		// Constructors
		TableRow(android::content::Context &arg0);
		TableRow(android::content::Context &arg0, __JniBaseClass &arg1);
		TableRow() = default;
		
		// Methods
		QAndroidJniObject generateLayoutParams(__JniBaseClass arg0);
		jstring getAccessibilityClassName();
		QAndroidJniObject getVirtualChildAt(jint arg0);
		jint getVirtualChildCount();
		void setOnHierarchyChangeListener(__JniBaseClass arg0);
	};
} // namespace android::widget

