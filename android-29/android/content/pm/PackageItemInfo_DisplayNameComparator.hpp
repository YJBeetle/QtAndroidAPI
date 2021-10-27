#pragma once

#ifndef ANDROID_CONTENT_PM_PACKAGEITEMINFO_DISPLAYNAMECOMPARATOR
#define ANDROID_CONTENT_PM_PACKAGEITEMINFO_DISPLAYNAMECOMPARATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::pm
{
	class PackageItemInfo;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}

namespace __jni_impl::android::content::pm
{
	class PackageItemInfo_DisplayNameComparator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::pm::PackageManager arg0);
		
		// Methods
		jint compare(__jni_impl::android::content::pm::PackageItemInfo arg0, __jni_impl::android::content::pm::PackageItemInfo arg1);
		jint compare(jobject arg0, jobject arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "PackageItemInfo.hpp"
#include "PackageManager.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	
	// Constructors
	void PackageItemInfo_DisplayNameComparator::__constructor(__jni_impl::android::content::pm::PackageManager arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageItemInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint PackageItemInfo_DisplayNameComparator::compare(__jni_impl::android::content::pm::PackageItemInfo arg0, __jni_impl::android::content::pm::PackageItemInfo arg1)
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
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PackageItemInfo_DisplayNameComparator : public __jni_impl::android::content::pm::PackageItemInfo_DisplayNameComparator
	{
	public:
		PackageItemInfo_DisplayNameComparator(QAndroidJniObject obj) { __thiz = obj; }
		PackageItemInfo_DisplayNameComparator(__jni_impl::android::content::pm::PackageManager arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PACKAGEITEMINFO_DISPLAYNAMECOMPARATOR

