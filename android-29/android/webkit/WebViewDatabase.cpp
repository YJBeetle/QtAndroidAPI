#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./WebViewDatabase.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebViewDatabase::WebViewDatabase(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebViewDatabase::WebViewDatabase()
		: JObject(
			"android.webkit.WebViewDatabase",
			"()V"
		) {}
	
	// Methods
	android::webkit::WebViewDatabase WebViewDatabase::getInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
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
	JArray WebViewDatabase::getHttpAuthUsernamePassword(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
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
	void WebViewDatabase::setHttpAuthUsernamePassword(JString arg0, JString arg1, JString arg2, JString arg3)
	{
		callMethod<void>(
			"setHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
} // namespace android::webkit

