#pragma once

#include "../../JObject.hpp"

class JArray;
class JObject;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentHandler(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ContentHandler();
		
		// Methods
		JObject getContent(java::net::URLConnection arg0) const;
		JObject getContent(java::net::URLConnection arg0, JArray arg1) const;
	};
} // namespace java::net

