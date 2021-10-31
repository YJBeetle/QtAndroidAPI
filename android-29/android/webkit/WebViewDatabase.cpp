#include "../content/Context.hpp"
#include "./WebViewDatabase.hpp"

namespace android::webkit
{
	// Fields
	
	WebViewDatabase::WebViewDatabase(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebViewDatabase::WebViewDatabase()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebViewDatabase",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WebViewDatabase::getInstance(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebViewDatabase",
			"getInstance",
			"(Landroid/content/Context;)Landroid/webkit/WebViewDatabase;",
			arg0.__jniObject().object()
		);
	}
	void WebViewDatabase::clearFormData()
	{
		__thiz.callMethod<void>(
			"clearFormData",
			"()V"
		);
	}
	void WebViewDatabase::clearHttpAuthUsernamePassword()
	{
		__thiz.callMethod<void>(
			"clearHttpAuthUsernamePassword",
			"()V"
		);
	}
	void WebViewDatabase::clearUsernamePassword()
	{
		__thiz.callMethod<void>(
			"clearUsernamePassword",
			"()V"
		);
	}
	jarray WebViewDatabase::getHttpAuthUsernamePassword(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jboolean WebViewDatabase::hasFormData()
	{
		return __thiz.callMethod<jboolean>(
			"hasFormData",
			"()Z"
		);
	}
	jboolean WebViewDatabase::hasHttpAuthUsernamePassword()
	{
		return __thiz.callMethod<jboolean>(
			"hasHttpAuthUsernamePassword",
			"()Z"
		);
	}
	jboolean WebViewDatabase::hasUsernamePassword()
	{
		return __thiz.callMethod<jboolean>(
			"hasUsernamePassword",
			"()Z"
		);
	}
	void WebViewDatabase::setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"setHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::webkit

