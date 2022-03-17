#pragma once

#include "../IntentFilter.def.hpp"
#include "./ActivityInfo.def.hpp"
#include "./PackageManager.def.hpp"
#include "./ProviderInfo.def.hpp"
#include "./ServiceInfo.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ResolveInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject ResolveInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ResolveInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::content::pm::ActivityInfo ResolveInfo::activityInfo()
	{
		return getObjectField(
			"activityInfo",
			"Landroid/content/pm/ActivityInfo;"
		);
	}
	inline android::content::IntentFilter ResolveInfo::filter()
	{
		return getObjectField(
			"filter",
			"Landroid/content/IntentFilter;"
		);
	}
	inline jint ResolveInfo::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	inline jboolean ResolveInfo::isDefault()
	{
		return getField<jboolean>(
			"isDefault"
		);
	}
	inline jboolean ResolveInfo::isInstantAppAvailable()
	{
		return getField<jboolean>(
			"isInstantAppAvailable"
		);
	}
	inline jint ResolveInfo::labelRes()
	{
		return getField<jint>(
			"labelRes"
		);
	}
	inline jint ResolveInfo::match()
	{
		return getField<jint>(
			"match"
		);
	}
	inline JString ResolveInfo::nonLocalizedLabel()
	{
		return getObjectField(
			"nonLocalizedLabel",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint ResolveInfo::preferredOrder()
	{
		return getField<jint>(
			"preferredOrder"
		);
	}
	inline jint ResolveInfo::priority()
	{
		return getField<jint>(
			"priority"
		);
	}
	inline android::content::pm::ProviderInfo ResolveInfo::providerInfo()
	{
		return getObjectField(
			"providerInfo",
			"Landroid/content/pm/ProviderInfo;"
		);
	}
	inline JString ResolveInfo::resolvePackageName()
	{
		return getObjectField(
			"resolvePackageName",
			"Ljava/lang/String;"
		);
	}
	inline android::content::pm::ServiceInfo ResolveInfo::serviceInfo()
	{
		return getObjectField(
			"serviceInfo",
			"Landroid/content/pm/ServiceInfo;"
		);
	}
	inline jint ResolveInfo::specificIndex()
	{
		return getField<jint>(
			"specificIndex"
		);
	}
	
	// Constructors
	inline ResolveInfo::ResolveInfo()
		: JObject(
			"android.content.pm.ResolveInfo",
			"()V"
		) {}
	inline ResolveInfo::ResolveInfo(android::content::pm::ResolveInfo &arg0)
		: JObject(
			"android.content.pm.ResolveInfo",
			"(Landroid/content/pm/ResolveInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ResolveInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ResolveInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint ResolveInfo::getIconResource() const
	{
		return callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	inline jboolean ResolveInfo::isCrossProfileIntentForwarderActivity() const
	{
		return callMethod<jboolean>(
			"isCrossProfileIntentForwarderActivity",
			"()Z"
		);
	}
	inline android::graphics::drawable::Drawable ResolveInfo::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JString ResolveInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString ResolveInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ResolveInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

