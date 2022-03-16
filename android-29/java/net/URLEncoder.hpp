#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::nio::charset
{
	class Charset;
}
namespace java::util
{
	class BitSet;
}

namespace java::net
{
	class URLEncoder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URLEncoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URLEncoder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString encode(JString arg0);
		static JString encode(JString arg0, JString arg1);
		static JString encode(JString arg0, java::nio::charset::Charset arg1);
	};
} // namespace java::net

