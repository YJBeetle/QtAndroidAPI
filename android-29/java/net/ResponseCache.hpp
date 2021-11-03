#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::net
{
	class CacheRequest;
}
namespace java::net
{
	class CacheResponse;
}
namespace java::net
{
	class URI;
}
namespace java::net
{
	class URLConnection;
}

namespace java::net
{
	class ResponseCache : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResponseCache(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResponseCache(QAndroidJniObject obj);
		
		// Constructors
		ResponseCache();
		
		// Methods
		static java::net::ResponseCache getDefault();
		static void setDefault(java::net::ResponseCache arg0);
		java::net::CacheResponse get(java::net::URI arg0, JString arg1, JObject arg2) const;
		java::net::CacheRequest put(java::net::URI arg0, java::net::URLConnection arg1) const;
	};
} // namespace java::net

