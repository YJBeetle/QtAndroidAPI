#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}

namespace java::net
{
	class CacheResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CacheResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CacheResponse(QJniObject obj);
		
		// Constructors
		CacheResponse();
		
		// Methods
		java::io::InputStream getBody();
		__JniBaseClass getHeaders();
	};
} // namespace java::net

