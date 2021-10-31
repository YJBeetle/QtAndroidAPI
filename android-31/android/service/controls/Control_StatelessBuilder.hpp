#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::service::controls
{
	class Control_StatelessBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Control_StatelessBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Control_StatelessBuilder(QJniObject obj);
		
		// Constructors
		Control_StatelessBuilder(android::service::controls::Control arg0);
		Control_StatelessBuilder(jstring arg0, android::app::PendingIntent arg1);
		
		// Methods
		android::service::controls::Control build();
		android::service::controls::Control_StatelessBuilder setAppIntent(android::app::PendingIntent arg0);
		android::service::controls::Control_StatelessBuilder setControlId(jstring arg0);
		android::service::controls::Control_StatelessBuilder setCustomColor(android::content::res::ColorStateList arg0);
		android::service::controls::Control_StatelessBuilder setCustomIcon(android::graphics::drawable::Icon arg0);
		android::service::controls::Control_StatelessBuilder setDeviceType(jint arg0);
		android::service::controls::Control_StatelessBuilder setStructure(jstring arg0);
		android::service::controls::Control_StatelessBuilder setSubtitle(jstring arg0);
		android::service::controls::Control_StatelessBuilder setTitle(jstring arg0);
		android::service::controls::Control_StatelessBuilder setZone(jstring arg0);
	};
} // namespace android::service::controls

