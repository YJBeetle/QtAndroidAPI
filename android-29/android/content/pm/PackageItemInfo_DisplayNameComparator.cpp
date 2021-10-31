#include "./PackageItemInfo.hpp"
#include "./PackageManager.hpp"
#include "./PackageItemInfo_DisplayNameComparator.hpp"

namespace android::content::pm
{
	// Fields
	
	PackageItemInfo_DisplayNameComparator::PackageItemInfo_DisplayNameComparator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PackageItemInfo_DisplayNameComparator::PackageItemInfo_DisplayNameComparator(android::content::pm::PackageManager arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageItemInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint PackageItemInfo_DisplayNameComparator::compare(android::content::pm::PackageItemInfo arg0, android::content::pm::PackageItemInfo arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Landroid/content/pm/PackageItemInfo;Landroid/content/pm/PackageItemInfo;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint PackageItemInfo_DisplayNameComparator::compare(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
} // namespace android::content::pm

