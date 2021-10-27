#include "./WebStorage.hpp"

namespace android::webkit
{
	// Fields
	
	WebStorage::WebStorage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject WebStorage::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebStorage",
			"getInstance",
			"()Landroid/webkit/WebStorage;"
		);
	}
	void WebStorage::deleteAllData()
	{
		__thiz.callMethod<void>(
			"deleteAllData",
			"()V"
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
	void WebStorage::getOrigins(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"getOrigins",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void WebStorage::getQuotaForOrigin(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getQuotaForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebStorage::getQuotaForOrigin(const QString &arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getQuotaForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void WebStorage::getUsageForOrigin(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getUsageForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebStorage::getUsageForOrigin(const QString &arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getUsageForOrigin",
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
} // namespace android::webkit

