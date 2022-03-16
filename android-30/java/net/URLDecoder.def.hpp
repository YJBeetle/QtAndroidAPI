#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::nio::charset
{
	class Charset;
}

namespace java::net
{
	class URLDecoder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit URLDecoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URLDecoder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		URLDecoder();
		
		// Methods
		static JString decode(JString arg0);
		static JString decode(JString arg0, JString arg1);
		static JString decode(JString arg0, java::nio::charset::Charset arg1);
	};
} // namespace java::net

