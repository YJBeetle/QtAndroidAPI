#include "../../app/PendingIntent.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "./Control.hpp"
#include "./templates/ControlTemplate.hpp"
#include "./Control_StatefulBuilder.hpp"

namespace android::service::controls
{
	// Fields
	
	// QJniObject forward
	Control_StatefulBuilder::Control_StatefulBuilder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Control_StatefulBuilder::Control_StatefulBuilder(android::service::controls::Control arg0)
		: JObject(
			"android.service.controls.Control$StatefulBuilder",
			"(Landroid/service/controls/Control;)V",
			arg0.object()
		) {}
	Control_StatefulBuilder::Control_StatefulBuilder(jstring arg0, android::app::PendingIntent arg1)
		: JObject(
			"android.service.controls.Control$StatefulBuilder",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	android::service::controls::Control Control_StatefulBuilder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/controls/Control;"
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setAppIntent(android::app::PendingIntent arg0)
	{
		return callObjectMethod(
			"setAppIntent",
			"(Landroid/app/PendingIntent;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object()
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setControlId(jstring arg0)
	{
		return callObjectMethod(
			"setControlId",
			"(Ljava/lang/String;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setControlTemplate(android::service::controls::templates::ControlTemplate arg0)
	{
		return callObjectMethod(
			"setControlTemplate",
			"(Landroid/service/controls/templates/ControlTemplate;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object()
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setCustomColor(android::content::res::ColorStateList arg0)
	{
		return callObjectMethod(
			"setCustomColor",
			"(Landroid/content/res/ColorStateList;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object()
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setCustomIcon(android::graphics::drawable::Icon arg0)
	{
		return callObjectMethod(
			"setCustomIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object()
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setDeviceType(jint arg0)
	{
		return callObjectMethod(
			"setDeviceType",
			"(I)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setStatus(jint arg0)
	{
		return callObjectMethod(
			"setStatus",
			"(I)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setStatusText(jstring arg0)
	{
		return callObjectMethod(
			"setStatusText",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setStructure(jstring arg0)
	{
		return callObjectMethod(
			"setStructure",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setSubtitle(jstring arg0)
	{
		return callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setTitle(jstring arg0)
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
	android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setZone(jstring arg0)
	{
		return callObjectMethod(
			"setZone",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
} // namespace android::service::controls

