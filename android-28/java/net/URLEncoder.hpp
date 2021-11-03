#pragma once

#include "../../JObject.hpp"

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
		URLEncoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring encode(jstring arg0);
		static jstring encode(jstring arg0, jstring arg1);
		static jstring encode(jstring arg0, java::nio::charset::Charset arg1);
	};
} // namespace java::net

