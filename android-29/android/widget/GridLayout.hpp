#pragma once

#include "../../JObject.hpp"
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
		static android::widget::GridLayout_Alignment BASELINE();
		static android::widget::GridLayout_Alignment BOTTOM();
		static android::widget::GridLayout_Alignment CENTER();
		static android::widget::GridLayout_Alignment END();
		static android::widget::GridLayout_Alignment FILL();
		static jint HORIZONTAL();
		static android::widget::GridLayout_Alignment LEFT();
		static android::widget::GridLayout_Alignment RIGHT();
		static android::widget::GridLayout_Alignment START();
		static android::widget::GridLayout_Alignment TOP();
		static jint UNDEFINED();
		static jint VERTICAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GridLayout(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		GridLayout(QAndroidJniObject obj);
		
		// Constructors
		GridLayout(android::content::Context arg0);
		GridLayout(android::content::Context arg0, JObject arg1);
		GridLayout(android::content::Context arg0, JObject arg1, jint arg2);
		GridLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		static android::widget::GridLayout_Spec spec(jint arg0);
		static android::widget::GridLayout_Spec spec(jint arg0, android::widget::GridLayout_Alignment arg1);
		static android::widget::GridLayout_Spec spec(jint arg0, jfloat arg1);
		static android::widget::GridLayout_Spec spec(jint arg0, jint arg1);
		static android::widget::GridLayout_Spec spec(jint arg0, android::widget::GridLayout_Alignment arg1, jfloat arg2);
		static android::widget::GridLayout_Spec spec(jint arg0, jint arg1, android::widget::GridLayout_Alignment arg2);
		static android::widget::GridLayout_Spec spec(jint arg0, jint arg1, jfloat arg2);
		static android::widget::GridLayout_Spec spec(jint arg0, jint arg1, android::widget::GridLayout_Alignment arg2, jfloat arg3);
		android::widget::GridLayout_LayoutParams generateLayoutParams(JObject arg0);
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

