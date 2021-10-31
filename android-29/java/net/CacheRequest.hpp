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
		
		// QJniObject forward
		template<typename ...Ts> explicit CacheRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CacheRequest(QJniObject obj);
		
		// Constructors
		CacheRequest();
		
		// Methods
		void abort();
		java::io::OutputStream getBody();
	};
} // namespace java::net

