#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::net
{
	class Proxy : public JObject
	{
	public:
		// Fields
		static JString PROXY_CHANGE_ACTION();
		
		// QJniObject forward
		template<typename ...Ts> explicit Proxy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Proxy(QJniObject obj);
		
		// Constructors
		Proxy();
		
		// Methods
		static JString getDefaultHost();
		static jint getDefaultPort();
		static JString getHost(android::content::Context arg0);
		static jint getPort(android::content::Context arg0);
	};
} // namespace android::net

