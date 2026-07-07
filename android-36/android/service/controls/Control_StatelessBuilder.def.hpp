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
class JString;
class JString;

namespace android::service::controls
{
	class Control_StatelessBuilder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Control_StatelessBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Control_StatelessBuilder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Control_StatelessBuilder(android::service::controls::Control arg0);
		Control_StatelessBuilder(JString arg0, android::app::PendingIntent arg1);
		
		// Methods
		android::service::controls::Control build() const;
		android::service::controls::Control_StatelessBuilder setAppIntent(android::app::PendingIntent arg0) const;
		android::service::controls::Control_StatelessBuilder setControlId(JString arg0) const;
		android::service::controls::Control_StatelessBuilder setCustomColor(android::content::res::ColorStateList arg0) const;
		android::service::controls::Control_StatelessBuilder setCustomIcon(android::graphics::drawable::Icon arg0) const;
		android::service::controls::Control_StatelessBuilder setDeviceType(jint arg0) const;
		android::service::controls::Control_StatelessBuilder setStructure(JString arg0) const;
		android::service::controls::Control_StatelessBuilder setSubtitle(JString arg0) const;
		android::service::controls::Control_StatelessBuilder setTitle(JString arg0) const;
		android::service::controls::Control_StatelessBuilder setZone(JString arg0) const;
	};
} // namespace android::service::controls

