#include "./ApplicationInfo.hpp"
#include "./PackageManager.hpp"
#include "../../../JObject.hpp"
#include "./ApplicationInfo_DisplayNameComparator.hpp"

namespace android::content::pm
{
	// Fields
	
	// QJniObject forward
	ApplicationInfo_DisplayNameComparator::ApplicationInfo_DisplayNameComparator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ApplicationInfo_DisplayNameComparator::ApplicationInfo_DisplayNameComparator(android::content::pm::PackageManager arg0)
		: JObject(
			"android.content.pm.ApplicationInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ApplicationInfo_DisplayNameComparator::compare(android::content::pm::ApplicationInfo arg0, android::content::pm::ApplicationInfo arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Landroid/content/pm/ApplicationInfo;Landroid/content/pm/ApplicationInfo;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint ApplicationInfo_DisplayNameComparator::compare(JObject arg0, JObject arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
} // namespace android::content::pm

