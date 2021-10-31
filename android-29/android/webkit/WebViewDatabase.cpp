#include "../content/Context.hpp"
#include "./WebViewDatabase.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebViewDatabase::WebViewDatabase(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WebViewDatabase::WebViewDatabase()
		: __JniBaseClass(
			"android.webkit.WebViewDatabase",
			"()V"
		) {}
	
	// Methods
	android::webkit::WebViewDatabase WebViewDatabase::getInstance(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebViewDatabase",
			"getInstance",
			"(Landroid/content/Context;)Landroid/webkit/WebViewDatabase;",
			arg0.object()
		);
	}
	void WebViewDatabase::clearFormData()
	{
		callMethod<void>(
			"clearFormData",
			"()V"
		);
	}
	void WebViewDatabase::clearHttpAuthUsernamePassword()
	{
		callMethod<void>(
			"clearHttpAuthUsernamePassword",
			"()V"
		);
	}
	void WebViewDatabase::clearUsernamePassword()
	{
		callMethod<void>(
			"clearUsernamePassword",
			"()V"
		);
	}
	jarray WebViewDatabase::getHttpAuthUsernamePassword(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jboolean WebViewDatabase::hasFormData()
	{
		return callMethod<jboolean>(
			"hasFormData",
			"()Z"
		);
	}
	jboolean WebViewDatabase::hasHttpAuthUsernamePassword()
	{
		return callMethod<jboolean>(
			"hasHttpAuthUsernamePassword",
			"()Z"
		);
	}
	jboolean WebViewDatabase::hasUsernamePassword()
	{
		return callMethod<jboolean>(
			"hasUsernamePassword",
			"()Z"
		);
	}
	void WebViewDatabase::setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		callMethod<void>(
			"setHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::webkit

