#pragma once

#include "../../JObject.hpp"

namespace java::net
{
	class URLConnection;
}

namespace java::net
{
	class ContentHandler : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentHandler(QAndroidJniObject obj);
		
		// Constructors
		ContentHandler();
		
		// Methods
		jobject getContent(java::net::URLConnection arg0);
		jobject getContent(java::net::URLConnection arg0, jarray arg1);
	};
} // namespace java::net

