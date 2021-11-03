#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class InputStream;
}

namespace java::net
{
	class CacheResponse : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CacheResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CacheResponse(QAndroidJniObject obj);
		
		// Constructors
		CacheResponse();
		
		// Methods
		java::io::InputStream getBody();
		JObject getHeaders();
	};
} // namespace java::net

