#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "./Control.def.hpp"
#include "./templates/ControlTemplate.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./Control_StatefulBuilder.def.hpp"

namespace android::service::controls
{
	// Fields
	
	// Constructors
	inline Control_StatefulBuilder::Control_StatefulBuilder(android::service::controls::Control arg0)
		: JObject(
			"android.service.controls.Control$StatefulBuilder",
			"(Landroid/service/controls/Control;)V",
			arg0.object()
		) {}
	inline Control_StatefulBuilder::Control_StatefulBuilder(JString arg0, android::app::PendingIntent arg1)
		: JObject(
			"android.service.controls.Control$StatefulBuilder",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline android::service::controls::Control Control_StatefulBuilder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/controls/Control;"
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setAppIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setAppIntent",
			"(Landroid/app/PendingIntent;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object()
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setAuthRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setAuthRequired",
			"(Z)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setControlId(JString arg0) const
	{
		return callObjectMethod(
			"setControlId",
			"(Ljava/lang/String;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setControlTemplate(android::service::controls::templates::ControlTemplate arg0) const
	{
		return callObjectMethod(
			"setControlTemplate",
			"(Landroid/service/controls/templates/ControlTemplate;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object()
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setCustomColor(android::content::res::ColorStateList arg0) const
	{
		return callObjectMethod(
			"setCustomColor",
			"(Landroid/content/res/ColorStateList;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object()
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setCustomIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setCustomIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object()
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setDeviceType(jint arg0) const
	{
		return callObjectMethod(
			"setDeviceType",
			"(I)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setStatus(jint arg0) const
	{
		return callObjectMethod(
			"setStatus",
			"(I)Landroid/service/controls/Control$StatefulBuilder;",
			arg0
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setStatusText(JString arg0) const
	{
		return callObjectMethod(
			"setStatusText",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setStructure(JString arg0) const
	{
		return callObjectMethod(
			"setStructure",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setSubtitle(JString arg0) const
	{
		return callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::controls::Control_StatefulBuilder Control_StatefulBuilder::setZone(JString arg0) const
	{
		return callObjectMethod(
			"setZone",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatefulBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::service::controls

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::controls;
#endif
