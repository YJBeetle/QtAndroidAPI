#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

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
	class GridLayout_Alignment;
}
namespace android::widget
{
	class GridLayout_LayoutParams;
}
namespace android::widget
{
	class GridLayout_Spec;
}

namespace android::widget
{
	class GridLayout : public android::view::ViewGroup
	{
	public:
		// Fields
		static jint ALIGN_BOUNDS();
		static jint ALIGN_MARGINS();
		static QAndroidJniObject BASELINE();
		static QAndroidJniObject BOTTOM();
		static QAndroidJniObject CENTER();
		static QAndroidJniObject END();
		static QAndroidJniObject FILL();
		static jint HORIZONTAL();
		static QAndroidJniObject LEFT();
		static QAndroidJniObject RIGHT();
		static QAndroidJniObject START();
		static QAndroidJniObject TOP();
		static jint UNDEFINED();
		static jint VERTICAL();
		
		GridLayout(QAndroidJniObject obj);
		// Constructors
		GridLayout(android::content::Context &arg0);
		GridLayout(android::content::Context &arg0, __JniBaseClass &arg1);
		GridLayout(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		GridLayout(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		GridLayout() = default;
		
		// Methods
		static QAndroidJniObject spec(jint arg0);
		static QAndroidJniObject spec(jint arg0, android::widget::GridLayout_Alignment arg1);
		static QAndroidJniObject spec(jint arg0, jfloat arg1);
		static QAndroidJniObject spec(jint arg0, jint arg1);
		static QAndroidJniObject spec(jint arg0, android::widget::GridLayout_Alignment arg1, jfloat arg2);
		static QAndroidJniObject spec(jint arg0, jint arg1, android::widget::GridLayout_Alignment arg2);
		static QAndroidJniObject spec(jint arg0, jint arg1, jfloat arg2);
		static QAndroidJniObject spec(jint arg0, jint arg1, android::widget::GridLayout_Alignment arg2, jfloat arg3);
		QAndroidJniObject generateLayoutParams(__JniBaseClass arg0);
		jstring getAccessibilityClassName();
		jint getAlignmentMode();
		jint getColumnCount();
		jint getOrientation();
		jint getRowCount();
		jboolean getUseDefaultMargins();
		jboolean isColumnOrderPreserved();
		jboolean isRowOrderPreserved();
		void onViewAdded(android::view::View arg0);
		void onViewRemoved(android::view::View arg0);
		void requestLayout();
		void setAlignmentMode(jint arg0);
		void setColumnCount(jint arg0);
		void setColumnOrderPreserved(jboolean arg0);
		void setOrientation(jint arg0);
		void setRowCount(jint arg0);
		void setRowOrderPreserved(jboolean arg0);
		void setUseDefaultMargins(jboolean arg0);
	};
} // namespace android::widget

