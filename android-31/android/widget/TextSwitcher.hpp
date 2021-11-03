#pragma once

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
class JString;

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
		TextSwitcher(android::content::Context arg0, JObject arg1);
		
		// Methods
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const;
		JString getAccessibilityClassName() const;
		void setCurrentText(JString arg0) const;
		void setText(JString arg0) const;
	};
} // namespace android::widget

