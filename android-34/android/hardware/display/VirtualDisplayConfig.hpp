#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../view/Surface.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./VirtualDisplayConfig.def.hpp"

namespace android::hardware::display
{
	// Fields
	inline JObject VirtualDisplayConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.display.VirtualDisplayConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VirtualDisplayConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean VirtualDisplayConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint VirtualDisplayConfig::getDensityDpi() const
	{
		return callMethod<jint>(
			"getDensityDpi",
			"()I"
		);
	}
	inline JObject VirtualDisplayConfig::getDisplayCategories() const
	{
		return callObjectMethod(
			"getDisplayCategories",
			"()Ljava/util/Set;"
		);
	}
	inline jint VirtualDisplayConfig::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline jint VirtualDisplayConfig::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline JString VirtualDisplayConfig::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat VirtualDisplayConfig::getRequestedRefreshRate() const
	{
		return callMethod<jfloat>(
			"getRequestedRefreshRate",
			"()F"
		);
	}
	inline android::view::Surface VirtualDisplayConfig::getSurface() const
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	inline jint VirtualDisplayConfig::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jint VirtualDisplayConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString VirtualDisplayConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VirtualDisplayConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::display

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::display;
#endif
