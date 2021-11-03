#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;

namespace android::webkit
{
	class URLUtil : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URLUtil(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URLUtil(QAndroidJniObject obj);
		
		// Constructors
		URLUtil();
		
		// Methods
		static JString composeSearchUrl(JString arg0, JString arg1, JString arg2);
		static JByteArray decode(JByteArray arg0);
		static JString guessFileName(JString arg0, JString arg1, JString arg2);
		static JString guessUrl(JString arg0);
		static jboolean isAboutUrl(JString arg0);
		static jboolean isAssetUrl(JString arg0);
		static jboolean isContentUrl(JString arg0);
		static jboolean isCookielessProxyUrl(JString arg0);
		static jboolean isDataUrl(JString arg0);
		static jboolean isFileUrl(JString arg0);
		static jboolean isHttpUrl(JString arg0);
		static jboolean isHttpsUrl(JString arg0);
		static jboolean isJavaScriptUrl(JString arg0);
		static jboolean isNetworkUrl(JString arg0);
		static jboolean isValidUrl(JString arg0);
		static JString stripAnchor(JString arg0);
	};
} // namespace android::webkit

