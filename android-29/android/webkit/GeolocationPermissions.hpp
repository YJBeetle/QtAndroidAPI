#pragma once

#ifndef ANDROID_WEBKIT_GEOLOCATIONPERMISSIONS
#define ANDROID_WEBKIT_GEOLOCATIONPERMISSIONS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class GeolocationPermissions : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void clear(jstring arg0);
		static QAndroidJniObject getInstance();
		void allow(jstring arg0);
		void getOrigins(__jni_impl::__JniBaseClass arg0);
		void clearAll();
		void getAllowed(jstring arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void GeolocationPermissions::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.GeolocationPermissions",
			"(V)V");
	}
	
	// Methods
	void GeolocationPermissions::clear(jstring arg0)
	{
		__thiz.callMethod<void>(
			"clear",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject GeolocationPermissions::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.GeolocationPermissions",
			"getInstance",
			"()Landroid/webkit/GeolocationPermissions;");
	}
	void GeolocationPermissions::allow(jstring arg0)
	{
		__thiz.callMethod<void>(
			"allow",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void GeolocationPermissions::getOrigins(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"getOrigins",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.__jniObject().object());
	}
	void GeolocationPermissions::clearAll()
	{
		__thiz.callMethod<void>(
			"clearAll",
			"()V");
	}
	void GeolocationPermissions::getAllowed(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"getAllowed",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class GeolocationPermissions : public __jni_impl::android::webkit::GeolocationPermissions
	{
	public:
		GeolocationPermissions(QAndroidJniObject obj) { __thiz = obj; }
		GeolocationPermissions()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_GEOLOCATIONPERMISSIONS

