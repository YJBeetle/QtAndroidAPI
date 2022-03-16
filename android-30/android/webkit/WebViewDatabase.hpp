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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebViewDatabase(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebViewDatabase(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WebViewDatabase();
		
		// Methods
		static android::webkit::WebViewDatabase getInstance(android::content::Context arg0);
		void clearFormData() const;
		void clearHttpAuthUsernamePassword() const;
		void clearUsernamePassword() const;
		JArray getHttpAuthUsernamePassword(JString arg0, JString arg1) const;
		jboolean hasFormData() const;
		jboolean hasHttpAuthUsernamePassword() const;
		jboolean hasUsernamePassword() const;
		void setHttpAuthUsernamePassword(JString arg0, JString arg1, JString arg2, JString arg3) const;
	};
} // namespace android::webkit

