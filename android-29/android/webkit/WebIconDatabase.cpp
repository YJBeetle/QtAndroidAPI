#include "./WebIconDatabase.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebIconDatabase::WebIconDatabase(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WebIconDatabase::WebIconDatabase()
		: __JniBaseClass(
			"android.webkit.WebIconDatabase",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject WebIconDatabase::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebIconDatabase",
			"getInstance",
			"()Landroid/webkit/WebIconDatabase;"
		);
	}
	void WebIconDatabase::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void WebIconDatabase::open(jstring arg0)
	{
		callMethod<void>(
			"open",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebIconDatabase::releaseIconForPageUrl(jstring arg0)
	{
		callMethod<void>(
			"releaseIconForPageUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebIconDatabase::removeAllIcons()
	{
		callMethod<void>(
			"removeAllIcons",
			"()V"
		);
	}
	void WebIconDatabase::requestIconForPageUrl(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"requestIconForPageUrl",
			"(Ljava/lang/String;Landroid/webkit/WebIconDatabase$IconListener;)V",
			arg0,
			arg1.object()
		);
	}
	void WebIconDatabase::retainIconForPageUrl(jstring arg0)
	{
		callMethod<void>(
			"retainIconForPageUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::webkit
