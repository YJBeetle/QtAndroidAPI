#pragma once

#include "./VirtualDisplayConfig.def.hpp"
#include "../../view/Surface.def.hpp"
#include "../../../JString.hpp"
#include "./VirtualDisplayConfig_Builder.def.hpp"

namespace android::hardware::display
{
	// Fields
	
	// Constructors
	inline VirtualDisplayConfig_Builder::VirtualDisplayConfig_Builder(JString arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.hardware.display.VirtualDisplayConfig$Builder",
			"(Ljava/lang/String;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::hardware::display::VirtualDisplayConfig_Builder VirtualDisplayConfig_Builder::addDisplayCategory(JString arg0) const
	{
		return callObjectMethod(
			"addDisplayCategory",
			"(Ljava/lang/String;)Landroid/hardware/display/VirtualDisplayConfig$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::hardware::display::VirtualDisplayConfig VirtualDisplayConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/display/VirtualDisplayConfig;"
		);
	}
	inline android::hardware::display::VirtualDisplayConfig_Builder VirtualDisplayConfig_Builder::setDisplayCategories(JObject arg0) const
	{
		return callObjectMethod(
			"setDisplayCategories",
			"(Ljava/util/Set;)Landroid/hardware/display/VirtualDisplayConfig$Builder;",
			arg0.object()
		);
	}
	inline android::hardware::display::VirtualDisplayConfig_Builder VirtualDisplayConfig_Builder::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/hardware/display/VirtualDisplayConfig$Builder;",
			arg0
		);
	}
	inline android::hardware::display::VirtualDisplayConfig_Builder VirtualDisplayConfig_Builder::setRequestedRefreshRate(jfloat arg0) const
	{
		return callObjectMethod(
			"setRequestedRefreshRate",
			"(F)Landroid/hardware/display/VirtualDisplayConfig$Builder;",
			arg0
		);
	}
	inline android::hardware::display::VirtualDisplayConfig_Builder VirtualDisplayConfig_Builder::setSurface(android::view::Surface arg0) const
	{
		return callObjectMethod(
			"setSurface",
			"(Landroid/view/Surface;)Landroid/hardware/display/VirtualDisplayConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::hardware::display

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::display;
#endif
