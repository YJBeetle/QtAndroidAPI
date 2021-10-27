#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}

namespace android::widget
{
	class ActionMenuView_LayoutParams : public android::widget::LinearLayout_LayoutParams
	{
	public:
		// Fields
		
		ActionMenuView_LayoutParams(QAndroidJniObject obj);
		// Constructors
		ActionMenuView_LayoutParams(android::view::ViewGroup_LayoutParams &arg0);
		ActionMenuView_LayoutParams(android::widget::ActionMenuView_LayoutParams &arg0);
		ActionMenuView_LayoutParams(android::content::Context &arg0, __JniBaseClass &arg1);
		ActionMenuView_LayoutParams(jint &arg0, jint &arg1);
		ActionMenuView_LayoutParams() = default;
		
		// Methods
	};
} // namespace android::widget

