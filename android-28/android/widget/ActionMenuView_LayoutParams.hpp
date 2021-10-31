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
		
		// QJniObject forward
		template<typename ...Ts> explicit ActionMenuView_LayoutParams(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout_LayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		ActionMenuView_LayoutParams(QJniObject obj);
		
		// Constructors
		ActionMenuView_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		ActionMenuView_LayoutParams(android::widget::ActionMenuView_LayoutParams &arg0);
		ActionMenuView_LayoutParams(android::content::Context arg0, __JniBaseClass arg1);
		ActionMenuView_LayoutParams(jint arg0, jint arg1);
		
		// Methods
	};
} // namespace android::widget

