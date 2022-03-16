#pragma once

#include "./ApplicationInfo.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ComponentInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline android::content::pm::ApplicationInfo ComponentInfo::applicationInfo()
	{
		return getObjectField(
			"applicationInfo",
			"Landroid/content/pm/ApplicationInfo;"
		);
	}
	inline jint ComponentInfo::descriptionRes()
	{
		return getField<jint>(
			"descriptionRes"
		);
	}
	inline jboolean ComponentInfo::directBootAware()
	{
		return getField<jboolean>(
			"directBootAware"
		);
	}
	inline jboolean ComponentInfo::enabled()
	{
		return getField<jboolean>(
			"enabled"
		);
	}
	inline jboolean ComponentInfo::exported()
	{
		return getField<jboolean>(
			"exported"
		);
	}
	inline JString ComponentInfo::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		);
	}
	inline JString ComponentInfo::splitName()
	{
		return getObjectField(
			"splitName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ComponentInfo::ComponentInfo()
		: android::content::pm::PackageItemInfo(
			"android.content.pm.ComponentInfo",
			"()V"
		) {}
	inline ComponentInfo::ComponentInfo(android::content::pm::ComponentInfo &arg0)
		: android::content::pm::PackageItemInfo(
			"android.content.pm.ComponentInfo",
			"(Landroid/content/pm/ComponentInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ComponentInfo::getBannerResource() const
	{
		return callMethod<jint>(
			"getBannerResource",
			"()I"
		);
	}
	inline jint ComponentInfo::getIconResource() const
	{
		return callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	inline jint ComponentInfo::getLogoResource() const
	{
		return callMethod<jint>(
			"getLogoResource",
			"()I"
		);
	}
	inline jboolean ComponentInfo::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline void ComponentInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers
#include "./PackageItemInfo.hpp"

