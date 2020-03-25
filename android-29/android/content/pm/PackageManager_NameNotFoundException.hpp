#pragma once

#ifndef ANDROID_CONTENT_PM_PACKAGEMANAGER_NAMENOTFOUNDEXCEPTION
#define ANDROID_CONTENT_PM_PACKAGEMANAGER_NAMENOTFOUNDEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../util/AndroidException.hpp"


namespace __jni_impl::android::content::pm
{
	class PackageManager_NameNotFoundException : public __jni_impl::android::util::AndroidException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::content::pm


namespace __jni_impl::android::content::pm
{
	// Fields
	
	// Constructors
	void PackageManager_NameNotFoundException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageManager$NameNotFoundException",
			"()V");
	}
	void PackageManager_NameNotFoundException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageManager$NameNotFoundException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PackageManager_NameNotFoundException : public __jni_impl::android::content::pm::PackageManager_NameNotFoundException
	{
	public:
		PackageManager_NameNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		PackageManager_NameNotFoundException()
		{
			__constructor();
		}
		PackageManager_NameNotFoundException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PACKAGEMANAGER_NAMENOTFOUNDEXCEPTION

