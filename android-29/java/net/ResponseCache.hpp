#pragma once

#include "../../JObject.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ResponseCache(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResponseCache(QJniObject obj);
		
		// Constructors
		ResponseCache();
		
		// Methods
		static java::net::ResponseCache getDefault();
		static void setDefault(java::net::ResponseCache arg0);
		java::net::CacheResponse get(java::net::URI arg0, jstring arg1, JObject arg2);
		java::net::CacheRequest put(java::net::URI arg0, java::net::URLConnection arg1);
	};
} // namespace java::net

