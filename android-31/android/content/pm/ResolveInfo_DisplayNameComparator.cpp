#include "./PackageManager.hpp"
#include "./ResolveInfo.hpp"
#include "./ResolveInfo_DisplayNameComparator.hpp"

namespace android::content::pm
{
	// Fields
	
	// QAndroidJniObject forward
	ResolveInfo_DisplayNameComparator::ResolveInfo_DisplayNameComparator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ResolveInfo_DisplayNameComparator::ResolveInfo_DisplayNameComparator(android::content::pm::PackageManager arg0)
		: JObject(
			"android.content.pm.ResolveInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ResolveInfo_DisplayNameComparator::compare(android::content::pm::ResolveInfo arg0, android::content::pm::ResolveInfo arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Landroid/content/pm/ResolveInfo;Landroid/content/pm/ResolveInfo;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint ResolveInfo_DisplayNameComparator::compare(jobject arg0, jobject arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
} // namespace android::content::pm

