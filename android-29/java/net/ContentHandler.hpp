#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class URLConnection;
}

namespace java::net
{
	class ContentHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		ContentHandler(QAndroidJniObject obj);
		// Constructors
		ContentHandler();
		
		// Methods
		jobject getContent(java::net::URLConnection arg0);
		jobject getContent(java::net::URLConnection arg0, jarray arg1);
	};
} // namespace java::net

