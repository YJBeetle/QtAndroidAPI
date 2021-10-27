#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class URLUtil : public __JniBaseClass
	{
	public:
		// Fields
		
		URLUtil(QAndroidJniObject obj);
		// Constructors
		URLUtil();
		
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
} // namespace android::webkit

