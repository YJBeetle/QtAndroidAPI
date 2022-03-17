#pragma once

#include "./PackageManager.def.hpp"
#include "./ResolveInfo.def.hpp"
#include "../../../JObject.hpp"
#include "./ResolveInfo_DisplayNameComparator.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline ResolveInfo_DisplayNameComparator::ResolveInfo_DisplayNameComparator(android::content::pm::PackageManager arg0)
		: JObject(
			"android.content.pm.ResolveInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ResolveInfo_DisplayNameComparator::compare(android::content::pm::ResolveInfo arg0, android::content::pm::ResolveInfo arg1) const
	{
		return callMethod<jint>(
			"compare",
			"(Landroid/content/pm/ResolveInfo;Landroid/content/pm/ResolveInfo;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint ResolveInfo_DisplayNameComparator::compare(JObject arg0, JObject arg1) const
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
