#pragma once

#ifndef ANDROID_WEBKIT_WEBSTORAGE
#define ANDROID_WEBKIT_WEBSTORAGE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class WebStorage : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		void getOrigins(__jni_impl::__JniBaseClass arg0);
		void getUsageForOrigin(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void getUsageForOrigin(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void getQuotaForOrigin(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void getQuotaForOrigin(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void setQuotaForOrigin(jstring arg0, jlong arg1);
		void setQuotaForOrigin(const QString &arg0, jlong arg1);
		void deleteOrigin(jstring arg0);
		void deleteOrigin(const QString &arg0);
		void deleteAllData();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebStorage::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebStorage",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WebStorage::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebStorage",
			"getInstance",
			"()Landroid/webkit/WebStorage;"
		);
	}
	void WebStorage::getOrigins(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"getOrigins",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void WebStorage::getUsageForOrigin(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getUsageForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebStorage::getUsageForOrigin(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getUsageForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void WebStorage::getQuotaForOrigin(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getQuotaForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebStorage::getQuotaForOrigin(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getQuotaForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void WebStorage::setQuotaForOrigin(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setQuotaForOrigin",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void WebStorage::setQuotaForOrigin(const QString &arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setQuotaForOrigin",
			"(Ljava/lang/String;J)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void WebStorage::deleteOrigin(jstring arg0)
	{
		__thiz.callMethod<void>(
			"deleteOrigin",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebStorage::deleteOrigin(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"deleteOrigin",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebStorage::deleteAllData()
	{
		__thiz.callMethod<void>(
			"deleteAllData",
			"()V"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebStorage : public __jni_impl::android::webkit::WebStorage
	{
	public:
		WebStorage(QAndroidJniObject obj) { __thiz = obj; }
		WebStorage()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBSTORAGE

