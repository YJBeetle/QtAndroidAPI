#include "./PackageManager.hpp"
#include "./ResolveInfo.hpp"
#include "./ResolveInfo_DisplayNameComparator.hpp"

namespace android::content::pm
{
	// Fields
	
	ResolveInfo_DisplayNameComparator::ResolveInfo_DisplayNameComparator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ResolveInfo_DisplayNameComparator::ResolveInfo_DisplayNameComparator(android::content::pm::PackageManager &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ResolveInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ResolveInfo_DisplayNameComparator::compare(android::content::pm::ResolveInfo arg0, android::content::pm::ResolveInfo arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Landroid/content/pm/ResolveInfo;Landroid/content/pm/ResolveInfo;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint ResolveInfo_DisplayNameComparator::compare(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
} // namespace android::content::pm

