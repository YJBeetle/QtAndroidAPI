#include "../../JString.hpp"
#include "./WebStorage.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebStorage::WebStorage(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::webkit::WebStorage WebStorage::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.WebStorage",
			"getInstance",
			"()Landroid/webkit/WebStorage;"
		);
	}
	void WebStorage::deleteAllData() const
	{
		callMethod<void>(
			"deleteAllData",
			"()V"
		);
	}
	void WebStorage::deleteOrigin(JString arg0) const
	{
		callMethod<void>(
			"deleteOrigin",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WebStorage::getOrigins(JObject arg0) const
	{
		callMethod<void>(
			"getOrigins",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
	void WebStorage::getQuotaForOrigin(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"getQuotaForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void WebStorage::getUsageForOrigin(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"getUsageForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void WebStorage::setQuotaForOrigin(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"setQuotaForOrigin",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::webkit

