#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::webkit
{
	class WebViewDatabase : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebViewDatabase(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebViewDatabase(QAndroidJniObject obj);
		
		// Constructors
		WebViewDatabase();
		
		// Methods
		static android::webkit::WebViewDatabase getInstance(android::content::Context arg0);
		void clearFormData();
		void clearHttpAuthUsernamePassword();
		void clearUsernamePassword();
		jarray getHttpAuthUsernamePassword(jstring arg0, jstring arg1);
		jboolean hasFormData();
		jboolean hasHttpAuthUsernamePassword();
		jboolean hasUsernamePassword();
		void setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
	};
} // namespace android::webkit

