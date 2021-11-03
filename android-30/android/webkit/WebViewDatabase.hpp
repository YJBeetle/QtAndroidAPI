#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::content
{
	class Context;
}
class JString;

namespace android::webkit
{
	class WebViewDatabase : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebViewDatabase(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebViewDatabase(QJniObject obj);
		
		// Constructors
		WebViewDatabase();
		
		// Methods
		static android::webkit::WebViewDatabase getInstance(android::content::Context arg0);
		void clearFormData();
		void clearHttpAuthUsernamePassword();
		void clearUsernamePassword();
		JArray getHttpAuthUsernamePassword(JString arg0, JString arg1);
		jboolean hasFormData();
		jboolean hasHttpAuthUsernamePassword();
		jboolean hasUsernamePassword();
		void setHttpAuthUsernamePassword(JString arg0, JString arg1, JString arg2, JString arg3);
	};
} // namespace android::webkit

