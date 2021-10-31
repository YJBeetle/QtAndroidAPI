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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CacheRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CacheRequest(QAndroidJniObject obj);
		
		// Constructors
		CacheRequest();
		
		// Methods
		void abort();
		QAndroidJniObject getBody();
	};
} // namespace java::net

