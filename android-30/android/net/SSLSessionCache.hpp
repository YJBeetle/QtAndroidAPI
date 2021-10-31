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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLSessionCache(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SSLSessionCache(QAndroidJniObject obj);
		
		// Constructors
		SSLSessionCache(android::content::Context arg0);
		SSLSessionCache(java::io::File arg0);
		
		// Methods
	};
} // namespace android::net

