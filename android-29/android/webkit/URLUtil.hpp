#pragma once

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
		static jstring composeSearchUrl(jstring arg0, jstring arg1, jstring arg2);
		static jstring composeSearchUrl(const QString &arg0, const QString &arg1, const QString &arg2);
		static jbyteArray decode(jbyteArray arg0);
		static jstring guessFileName(jstring arg0, jstring arg1, jstring arg2);
		static jstring guessFileName(const QString &arg0, const QString &arg1, const QString &arg2);
		static jstring guessUrl(jstring arg0);
		static jstring guessUrl(const QString &arg0);
		static jboolean isAboutUrl(jstring arg0);
		static jboolean isAboutUrl(const QString &arg0);
		static jboolean isAssetUrl(jstring arg0);
		static jboolean isAssetUrl(const QString &arg0);
		static jboolean isContentUrl(jstring arg0);
		static jboolean isContentUrl(const QString &arg0);
		static jboolean isCookielessProxyUrl(jstring arg0);
		static jboolean isCookielessProxyUrl(const QString &arg0);
		static jboolean isDataUrl(jstring arg0);
		static jboolean isDataUrl(const QString &arg0);
		static jboolean isFileUrl(jstring arg0);
		static jboolean isFileUrl(const QString &arg0);
		static jboolean isHttpUrl(jstring arg0);
		static jboolean isHttpUrl(const QString &arg0);
		static jboolean isHttpsUrl(jstring arg0);
		static jboolean isHttpsUrl(const QString &arg0);
		static jboolean isJavaScriptUrl(jstring arg0);
		static jboolean isJavaScriptUrl(const QString &arg0);
		static jboolean isNetworkUrl(jstring arg0);
		static jboolean isNetworkUrl(const QString &arg0);
		static jboolean isValidUrl(jstring arg0);
		static jboolean isValidUrl(const QString &arg0);
		static jstring stripAnchor(jstring arg0);
		static jstring stripAnchor(const QString &arg0);
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
			"()V"
		);
	}
	
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
	jstring URLUtil::composeSearchUrl(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.URLUtil",
			"composeSearchUrl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
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
	jstring URLUtil::guessFileName(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.URLUtil",
			"guessFileName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
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
	jstring URLUtil::guessUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.URLUtil",
			"guessUrl",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isAboutUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isAboutUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isAssetUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isAssetUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isContentUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isContentUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isCookielessProxyUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isCookielessProxyUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isDataUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isDataUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isFileUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isFileUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isHttpUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isHttpUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isHttpsUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isHttpsUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isJavaScriptUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isJavaScriptUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isNetworkUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isNetworkUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLUtil::isValidUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isValidUrl",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jstring URLUtil::stripAnchor(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.URLUtil",
			"stripAnchor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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

