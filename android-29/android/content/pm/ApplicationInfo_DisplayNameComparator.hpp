#pragma once

#ifndef ANDROID_CONTENT_PM_APPLICATIONINFO_DISPLAYNAMECOMPARATOR
#define ANDROID_CONTENT_PM_APPLICATIONINFO_DISPLAYNAMECOMPARATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}

namespace __jni_impl::android::content::pm
{
	class ApplicationInfo_DisplayNameComparator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::pm::PackageManager arg0);
		
		// Methods
		jint compare(__jni_impl::android::content::pm::ApplicationInfo arg0, __jni_impl::android::content::pm::ApplicationInfo arg1);
		jint compare(jobject arg0, jobject arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "PackageManager.hpp"
#include "ApplicationInfo.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	
	// Constructors
	void ApplicationInfo_DisplayNameComparator::__constructor(__jni_impl::android::content::pm::PackageManager arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ApplicationInfo$DisplayNameComparator",
			"(Landroid/content/pm/PackageManager;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint ApplicationInfo_DisplayNameComparator::compare(__jni_impl::android::content::pm::ApplicationInfo arg0, __jni_impl::android::content::pm::ApplicationInfo arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Landroid/content/pm/ApplicationInfo;Landroid/content/pm/ApplicationInfo;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jint ApplicationInfo_DisplayNameComparator::compare(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ApplicationInfo_DisplayNameComparator : public __jni_impl::android::content::pm::ApplicationInfo_DisplayNameComparator
	{
	public:
		ApplicationInfo_DisplayNameComparator(QAndroidJniObject obj) { __thiz = obj; }
		ApplicationInfo_DisplayNameComparator(__jni_impl::android::content::pm::PackageManager arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_APPLICATIONINFO_DISPLAYNAMECOMPARATOR

