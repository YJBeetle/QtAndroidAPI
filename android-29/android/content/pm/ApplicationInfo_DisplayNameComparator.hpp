#pragma once

#include "./ApplicationInfo.def.hpp"
#include "./PackageManager.def.hpp"
#include "../../../JObject.hpp"
#include "./ApplicationInfo_DisplayNameComparator.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline ApplicationInfo_DisplayNameComparator::ApplicationInfo_DisplayNameComparator(android::content::pm::PackageManager arg0)
		: JObject(
			"android.content.pm.ApplicationInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ApplicationInfo_DisplayNameComparator::compare(android::content::pm::ApplicationInfo arg0, android::content::pm::ApplicationInfo arg1) const
	{
		return callMethod<jint>(
			"compare",
			"(Landroid/content/pm/ApplicationInfo;Landroid/content/pm/ApplicationInfo;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint ApplicationInfo_DisplayNameComparator::compare(JObject arg0, JObject arg1) const
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

