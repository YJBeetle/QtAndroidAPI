#include "./GeolocationPermissions.hpp"

namespace android::webkit
{
	// Fields
	
	GeolocationPermissions::GeolocationPermissions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject GeolocationPermissions::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.GeolocationPermissions",
			"getInstance",
			"()Landroid/webkit/GeolocationPermissions;"
		);
	}
	void GeolocationPermissions::allow(jstring arg0)
	{
		__thiz.callMethod<void>(
			"allow",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void GeolocationPermissions::allow(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"allow",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void GeolocationPermissions::clear(jstring arg0)
	{
		__thiz.callMethod<void>(
			"clear",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void GeolocationPermissions::clear(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"clear",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void GeolocationPermissions::clearAll()
	{
		__thiz.callMethod<void>(
			"clearAll",
			"()V"
		);
	}
	void GeolocationPermissions::getAllowed(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getAllowed",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GeolocationPermissions::getAllowed(const QString &arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getAllowed",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void GeolocationPermissions::getOrigins(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"getOrigins",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::webkit

