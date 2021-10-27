#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class OutputStream;
}

namespace java::net
{
	class CacheRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		CacheRequest(QAndroidJniObject obj);
		// Constructors
		CacheRequest();
		
		// Methods
		void abort();
		QAndroidJniObject getBody();
	};
} // namespace java::net

