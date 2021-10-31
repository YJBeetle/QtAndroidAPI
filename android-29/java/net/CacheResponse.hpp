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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CacheResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CacheResponse(QAndroidJniObject obj);
		
		// Constructors
		CacheResponse();
		
		// Methods
		QAndroidJniObject getBody();
		QAndroidJniObject getHeaders();
	};
} // namespace java::net

