#include "../../app/PendingIntent.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "./Control.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./Control_StatelessBuilder.hpp"

namespace android::service::controls
{
	// Fields
	
	// QAndroidJniObject forward
	Control_StatelessBuilder::Control_StatelessBuilder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Control_StatelessBuilder::Control_StatelessBuilder(android::service::controls::Control arg0)
		: JObject(
			"android.service.controls.Control$StatelessBuilder",
			"(Landroid/service/controls/Control;)V",
			arg0.object()
		) {}
	Control_StatelessBuilder::Control_StatelessBuilder(JString arg0, android::app::PendingIntent arg1)
		: JObject(
			"android.service.controls.Control$StatelessBuilder",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	android::service::controls::Control Control_StatelessBuilder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/controls/Control;"
		);
	}
	android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setAppIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setAppIntent",
			"(Landroid/app/PendingIntent;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object()
		);
	}
	android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setControlId(JString arg0) const
	{
		return callObjectMethod(
			"setControlId",
			"(Ljava/lang/String;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object<jstring>()
		);
	}
	android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setCustomColor(android::content::res::ColorStateList arg0) const
	{
		return callObjectMethod(
			"setCustomColor",
			"(Landroid/content/res/ColorStateList;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object()
		);
	}
	android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setCustomIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setCustomIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object()
		);
	}
	android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setDeviceType(jint arg0) const
	{
		return callObjectMethod(
			"setDeviceType",
			"(I)Landroid/service/controls/Control$StatelessBuilder;",
			arg0
		);
	}
	android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setStructure(JString arg0) const
	{
		return callObjectMethod(
			"setStructure",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object<jstring>()
		);
	}
	android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setSubtitle(JString arg0) const
	{
		return callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object<jstring>()
		);
	}
	android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object<jstring>()
		);
	}
	android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setZone(JString arg0) const
	{
		return callObjectMethod(
			"setZone",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::service::controls

