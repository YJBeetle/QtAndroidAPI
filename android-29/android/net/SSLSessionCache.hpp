#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace java::io
{
	class File;
}

namespace android::net
{
	class SSLSessionCache : public __JniBaseClass
	{
	public:
		// Fields
		
		SSLSessionCache(QAndroidJniObject obj);
		// Constructors
		SSLSessionCache(android::content::Context &arg0);
		SSLSessionCache(java::io::File &arg0);
		SSLSessionCache() = default;
		
		// Methods
	};
} // namespace android::net

