#pragma once

#include "./RelativeLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::widget
{
	class TextView;
}
class JString;

namespace android::widget
{
	class TwoLineListItem : public android::widget::RelativeLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TwoLineListItem(const char *className, const char *sig, Ts...agv) : android::widget::RelativeLayout(className, sig, std::forward<Ts>(agv)...) {}
		TwoLineListItem(QAndroidJniObject obj);
		
		// Constructors
		TwoLineListItem(android::content::Context arg0);
		TwoLineListItem(android::content::Context arg0, JObject arg1);
		TwoLineListItem(android::content::Context arg0, JObject arg1, jint arg2);
		TwoLineListItem(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName() const;
		android::widget::TextView getText1() const;
		android::widget::TextView getText2() const;
	};
} // namespace android::widget

