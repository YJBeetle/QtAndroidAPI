#include "./ApplicationInfo.hpp"
#include "./PackageManager.hpp"
#include "./ApplicationInfo_DisplayNameComparator.hpp"

namespace android::content::pm
{
	// Fields
	
	ApplicationInfo_DisplayNameComparator::ApplicationInfo_DisplayNameComparator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ApplicationInfo_DisplayNameComparator::ApplicationInfo_DisplayNameComparator(android::content::pm::PackageManager &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ApplicationInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ApplicationInfo_DisplayNameComparator::compare(android::content::pm::ApplicationInfo arg0, android::content::pm::ApplicationInfo arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Landroid/content/pm/ApplicationInfo;Landroid/content/pm/ApplicationInfo;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint ApplicationInfo_DisplayNameComparator::compare(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
} // namespace android::content::pm

