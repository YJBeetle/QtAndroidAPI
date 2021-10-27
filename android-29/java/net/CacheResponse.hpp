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
		
		CacheResponse(QAndroidJniObject obj);
		// Constructors
		CacheResponse();
		
		// Methods
		QAndroidJniObject getBody();
		QAndroidJniObject getHeaders();
	};
} // namespace java::net

