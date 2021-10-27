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
		
		TextSwitcher(QAndroidJniObject obj);
		// Constructors
		TextSwitcher(android::content::Context &arg0);
		TextSwitcher(android::content::Context &arg0, __JniBaseClass &arg1);
		TextSwitcher() = default;
		
		// Methods
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2);
		jstring getAccessibilityClassName();
		void setCurrentText(jstring arg0);
		void setCurrentText(const QString &arg0);
		void setText(jstring arg0);
		void setText(const QString &arg0);
	};
} // namespace android::widget

