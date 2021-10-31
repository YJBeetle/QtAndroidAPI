#include "./WebIconDatabase.hpp"

namespace android::webkit
{
	// Fields
	
	WebIconDatabase::WebIconDatabase(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebIconDatabase::WebIconDatabase()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebIconDatabase",
			"()V"
		);
	}
	
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
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void WebIconDatabase::open(jstring arg0)
	{
		__thiz.callMethod<void>(
			"open",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebIconDatabase::releaseIconForPageUrl(jstring arg0)
	{
		__thiz.callMethod<void>(
			"releaseIconForPageUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebIconDatabase::removeAllIcons()
	{
		__thiz.callMethod<void>(
			"removeAllIcons",
			"()V"
		);
	}
	void WebIconDatabase::requestIconForPageUrl(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"requestIconForPageUrl",
			"(Ljava/lang/String;Landroid/webkit/WebIconDatabase$IconListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebIconDatabase::retainIconForPageUrl(jstring arg0)
	{
		__thiz.callMethod<void>(
			"retainIconForPageUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::webkit

