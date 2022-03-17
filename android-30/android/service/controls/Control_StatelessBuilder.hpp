#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "./Control.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./Control_StatelessBuilder.def.hpp"

namespace android::service::controls
{
	// Fields
	
	// Constructors
	inline Control_StatelessBuilder::Control_StatelessBuilder(android::service::controls::Control arg0)
		: JObject(
			"android.service.controls.Control$StatelessBuilder",
			"(Landroid/service/controls/Control;)V",
			arg0.object()
		) {}
	inline Control_StatelessBuilder::Control_StatelessBuilder(JString arg0, android::app::PendingIntent arg1)
		: JObject(
			"android.service.controls.Control$StatelessBuilder",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline android::service::controls::Control Control_StatelessBuilder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/controls/Control;"
		);
	}
	inline android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setAppIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setAppIntent",
			"(Landroid/app/PendingIntent;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object()
		);
	}
	inline android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setControlId(JString arg0) const
	{
		return callObjectMethod(
			"setControlId",
			"(Ljava/lang/String;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setCustomColor(android::content::res::ColorStateList arg0) const
	{
		return callObjectMethod(
			"setCustomColor",
			"(Landroid/content/res/ColorStateList;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object()
		);
	}
	inline android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setCustomIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setCustomIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object()
		);
	}
	inline android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setDeviceType(jint arg0) const
	{
		return callObjectMethod(
			"setDeviceType",
			"(I)Landroid/service/controls/Control$StatelessBuilder;",
			arg0
		);
	}
	inline android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setStructure(JString arg0) const
	{
		return callObjectMethod(
			"setStructure",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setSubtitle(JString arg0) const
	{
		return callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::controls::Control_StatelessBuilder Control_StatelessBuilder::setZone(JString arg0) const
	{
		return callObjectMethod(
			"setZone",
			"(Ljava/lang/CharSequence;)Landroid/service/controls/Control$StatelessBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::service::controls

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::controls;
#endif
