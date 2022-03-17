#pragma once

#include "./PackageItemInfo.def.hpp"
#include "./PackageManager.def.hpp"
#include "../../../JObject.hpp"
#include "./PackageItemInfo_DisplayNameComparator.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline PackageItemInfo_DisplayNameComparator::PackageItemInfo_DisplayNameComparator(android::content::pm::PackageManager arg0)
		: JObject(
			"android.content.pm.PackageItemInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint PackageItemInfo_DisplayNameComparator::compare(android::content::pm::PackageItemInfo arg0, android::content::pm::PackageItemInfo arg1) const
	{
		return callMethod<jint>(
			"compare",
			"(Landroid/content/pm/PackageItemInfo;Landroid/content/pm/PackageItemInfo;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint PackageItemInfo_DisplayNameComparator::compare(JObject arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
