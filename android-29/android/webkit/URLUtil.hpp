#pragma once

#ifndef ANDROID_WEBKIT_URLUTIL
#define ANDROID_WEBKIT_URLUTIL

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class URLUtil : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jbyteArray decode(jbyteArray arg0);
		static jstring guessUrl(jstring arg0);
		static jstring composeSearchUrl(jstring arg0, jstring arg1, jstring arg2);
		static jboolean isAssetUrl(jstring arg0);
		static jboolean isCookielessProxyUrl(jstring arg0);
		static jboolean isFileUrl(jstring arg0);
		static jboolean isAboutUrl(jstring arg0);
		static jboolean isDataUrl(jstring arg0);
		static jboolean isJavaScriptUrl(jstring arg0);
		static jboolean isHttpUrl(jstring arg0);
		static jboolean isHttpsUrl(jstring arg0);
		static jboolean isNetworkUrl(jstring arg0);
		static jboolean isContentUrl(jstring arg0);
		static jboolean isValidUrl(jstring arg0);
		static jstring stripAnchor(jstring arg0);
		static jstring guessFileName(jstring arg0, jstring arg1, jstring arg2);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void URLUtil::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.URLUtil",
			"()V");
	}
	
	// Methods
	jbyteArray URLUtil::decode(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.URLUtil",
			"decode",
			"([B)[B",
			arg0
		).object<jbyteArray>();
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
	jboolean URLUtil::isAssetUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isAssetUrl",
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
	jboolean URLUtil::isFileUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isFileUrl",
			"(Ljava/lang/String;)Z",
			arg0
		);
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
	jboolean URLUtil::isDataUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isDataUrl",
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
	jboolean URLUtil::isNetworkUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isNetworkUrl",
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
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class URLUtil : public __jni_impl::android::webkit::URLUtil
	{
	public:
		URLUtil(QAndroidJniObject obj) { __thiz = obj; }
		URLUtil()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_URLUTIL

