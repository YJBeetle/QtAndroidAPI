#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::service::controls
{
	class Control;
}
namespace android::service::controls::templates
{
	class ControlTemplate;
}
class JString;
class JString;

namespace android::service::controls
{
	class Control_StatefulBuilder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Control_StatefulBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Control_StatefulBuilder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Control_StatefulBuilder(android::service::controls::Control arg0);
		Control_StatefulBuilder(JString arg0, android::app::PendingIntent arg1);
		
		// Methods
		android::service::controls::Control build() const;
		android::service::controls::Control_StatefulBuilder setAppIntent(android::app::PendingIntent arg0) const;
		android::service::controls::Control_StatefulBuilder setControlId(JString arg0) const;
		android::service::controls::Control_StatefulBuilder setControlTemplate(android::service::controls::templates::ControlTemplate arg0) const;
		android::service::controls::Control_StatefulBuilder setCustomColor(android::content::res::ColorStateList arg0) const;
		android::service::controls::Control_StatefulBuilder setCustomIcon(android::graphics::drawable::Icon arg0) const;
		android::service::controls::Control_StatefulBuilder setDeviceType(jint arg0) const;
		android::service::controls::Control_StatefulBuilder setStatus(jint arg0) const;
		android::service::controls::Control_StatefulBuilder setStatusText(JString arg0) const;
		android::service::controls::Control_StatefulBuilder setStructure(JString arg0) const;
		android::service::controls::Control_StatefulBuilder setSubtitle(JString arg0) const;
		android::service::controls::Control_StatefulBuilder setTitle(JString arg0) const;
		android::service::controls::Control_StatefulBuilder setZone(JString arg0) const;
	};
} // namespace android::service::controls

