#include "../../JString.hpp"
#include "./WebIconDatabase.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebIconDatabase::WebIconDatabase(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebIconDatabase::WebIconDatabase()
		: JObject(
			"android.webkit.WebIconDatabase",
			"()V"
		) {}
	
	// Methods
	android::webkit::WebIconDatabase WebIconDatabase::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.WebIconDatabase",
			"getInstance",
			"()Landroid/webkit/WebIconDatabase;"
		);
	}
	void WebIconDatabase::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void WebIconDatabase::open(JString arg0) const
	{
		callMethod<void>(
			"open",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WebIconDatabase::releaseIconForPageUrl(JString arg0) const
	{
		callMethod<void>(
			"releaseIconForPageUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void WebIconDatabase::removeAllIcons() const
	{
		callMethod<void>(
			"removeAllIcons",
			"()V"
		);
	}
	void WebIconDatabase::requestIconForPageUrl(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestIconForPageUrl",
			"(Ljava/lang/String;Landroid/webkit/WebIconDatabase$IconListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void WebIconDatabase::retainIconForPageUrl(JString arg0) const
	{
		callMethod<void>(
			"retainIconForPageUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::webkit

