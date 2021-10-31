#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view
{
	class ViewGroup_MarginLayoutParams;
}

namespace android::widget
{
	class TableLayout_LayoutParams : public android::widget::LinearLayout_LayoutParams
	{
	public:
		// Fields
		
		TableLayout_LayoutParams(QAndroidJniObject obj);
		// Constructors
		TableLayout_LayoutParams();
		TableLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		TableLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		TableLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1);
		TableLayout_LayoutParams(jint arg0, jint arg1);
		TableLayout_LayoutParams(jint arg0, jint arg1, jfloat arg2);
		
		// Methods
	};
} // namespace android::widget

