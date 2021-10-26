#pragma once

#ifndef ANDROID_CONTENT_RES_OBBSCANNER
#define ANDROID_CONTENT_RES_OBBSCANNER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class ObbInfo;
}

namespace __jni_impl::android::content::res
{
	class ObbScanner : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getObbInfo(jstring arg0);
		static QAndroidJniObject getObbInfo(const QString &arg0);
	};
} // namespace __jni_impl::android::content::res

#include "ObbInfo.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	
	// Constructors
	void ObbScanner::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.res.ObbScanner",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ObbScanner::getObbInfo(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ObbScanner",
			"getObbInfo",
			"(Ljava/lang/String;)Landroid/content/res/ObbInfo;",
			arg0
		);
	}
	QAndroidJniObject ObbScanner::getObbInfo(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.ObbScanner",
			"getObbInfo",
			"(Ljava/lang/String;)Landroid/content/res/ObbInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class ObbScanner : public __jni_impl::android::content::res::ObbScanner
	{
	public:
		ObbScanner(QAndroidJniObject obj) { __thiz = obj; }
		ObbScanner()
		{
			__constructor();
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_OBBSCANNER

