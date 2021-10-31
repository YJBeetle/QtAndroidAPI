#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"
#include "./ViewAnimator.hpp"
#include "./ViewSwitcher.hpp"

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
	class TextSwitcher : public android::widget::ViewSwitcher
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextSwitcher(const char *className, const char *sig, Ts...agv) : android::widget::ViewSwitcher(className, sig, std::forward<Ts>(agv)...) {}
		TextSwitcher(QJniObject obj);
		
		// Constructors
		TextSwitcher(android::content::Context arg0);
		TextSwitcher(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2);
		jstring getAccessibilityClassName();
		void setCurrentText(jstring arg0);
		void setText(jstring arg0);
	};
} // namespace android::widget

