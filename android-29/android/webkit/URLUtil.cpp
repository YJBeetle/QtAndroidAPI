#include "./URLUtil.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	URLUtil::URLUtil(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	URLUtil::URLUtil()
		: __JniBaseClass(
			"android.webkit.URLUtil",
			"()V"
		) {}
	
	// Methods
	jstring URLUtil::composeSearchUrl(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.URLUtil",
			"composeSearchUrl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jbyteArray URLUtil::decode(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.URLUtil",
			"decode",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jstring URLUtil::guessFileName(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.URLUtil",
			"guessFileName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring URLUtil::guessUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.URLUtil",
			"guessUrl",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean URLUtil::isAboutUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isAboutUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean URLUtil::isAssetUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isAssetUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean URLUtil::isContentUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isContentUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean URLUtil::isCookielessProxyUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isCookielessProxyUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean URLUtil::isDataUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isDataUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean URLUtil::isFileUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isFileUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean URLUtil::isHttpUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isHttpUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean URLUtil::isHttpsUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isHttpsUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean URLUtil::isJavaScriptUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isJavaScriptUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean URLUtil::isNetworkUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isNetworkUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean URLUtil::isValidUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isValidUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring URLUtil::stripAnchor(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.URLUtil",
			"stripAnchor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::webkit

