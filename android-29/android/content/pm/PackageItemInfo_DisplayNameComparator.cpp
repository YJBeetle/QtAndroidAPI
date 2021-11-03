#include "./PackageItemInfo.hpp"
#include "./PackageManager.hpp"
#include "./PackageItemInfo_DisplayNameComparator.hpp"

namespace android::content::pm
{
	// Fields
	
	// QJniObject forward
	PackageItemInfo_DisplayNameComparator::PackageItemInfo_DisplayNameComparator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PackageItemInfo_DisplayNameComparator::PackageItemInfo_DisplayNameComparator(android::content::pm::PackageManager arg0)
		: JObject(
			"android.content.pm.PackageItemInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.object()
		) {}
	
	// Methods
	jint PackageItemInfo_DisplayNameComparator::compare(android::content::pm::PackageItemInfo arg0, android::content::pm::PackageItemInfo arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Landroid/content/pm/PackageItemInfo;Landroid/content/pm/PackageItemInfo;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint PackageItemInfo_DisplayNameComparator::compare(jobject arg0, jobject arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
} // namespace android::content::pm

