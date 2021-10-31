#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class URLUtil : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URLUtil(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		URLUtil(QAndroidJniObject obj);
		
		// Constructors
		URLUtil();
		
		// Methods
		static jstring composeSearchUrl(jstring arg0, jstring arg1, jstring arg2);
		static jbyteArray decode(jbyteArray arg0);
		static jstring guessFileName(jstring arg0, jstring arg1, jstring arg2);
		static jstring guessUrl(jstring arg0);
		static jboolean isAboutUrl(jstring arg0);
		static jboolean isAssetUrl(jstring arg0);
		static jboolean isContentUrl(jstring arg0);
		static jboolean isCookielessProxyUrl(jstring arg0);
		static jboolean isDataUrl(jstring arg0);
		static jboolean isFileUrl(jstring arg0);
		static jboolean isHttpUrl(jstring arg0);
		static jboolean isHttpsUrl(jstring arg0);
		static jboolean isJavaScriptUrl(jstring arg0);
		static jboolean isNetworkUrl(jstring arg0);
		static jboolean isValidUrl(jstring arg0);
		static jstring stripAnchor(jstring arg0);
	};
} // namespace android::webkit

