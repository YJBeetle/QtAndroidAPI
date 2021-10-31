#include "./GeolocationPermissions.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	GeolocationPermissions::GeolocationPermissions(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::webkit::GeolocationPermissions GeolocationPermissions::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.GeolocationPermissions",
			"getInstance",
			"()Landroid/webkit/GeolocationPermissions;"
		);
	}
	void GeolocationPermissions::allow(jstring arg0)
	{
		callMethod<void>(
			"allow",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void GeolocationPermissions::clear(jstring arg0)
	{
		callMethod<void>(
			"clear",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void GeolocationPermissions::clearAll()
	{
		callMethod<void>(
			"clearAll",
			"()V"
		);
	}
	void GeolocationPermissions::getAllowed(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"getAllowed",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.object()
		);
	}
	void GeolocationPermissions::getOrigins(__JniBaseClass arg0)
	{
		callMethod<void>(
			"getOrigins",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
} // namespace android::webkit

