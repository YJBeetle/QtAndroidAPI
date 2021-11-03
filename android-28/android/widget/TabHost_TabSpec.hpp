#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class TabHost;
}
class JString;
class JString;

namespace android::widget
{
	class TabHost_TabSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TabHost_TabSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TabHost_TabSpec(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getTag() const;
		android::widget::TabHost_TabSpec setContent(android::content::Intent arg0) const;
		android::widget::TabHost_TabSpec setContent(JObject arg0) const;
		android::widget::TabHost_TabSpec setContent(jint arg0) const;
		android::widget::TabHost_TabSpec setIndicator(android::view::View arg0) const;
		android::widget::TabHost_TabSpec setIndicator(JString arg0) const;
		android::widget::TabHost_TabSpec setIndicator(JString arg0, android::graphics::drawable::Drawable arg1) const;
	};
} // namespace android::widget

