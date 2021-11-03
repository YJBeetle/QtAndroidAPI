#pragma once

#include "../../JObject.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URLDecoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URLDecoder(QAndroidJniObject obj);
		
		// Constructors
		URLDecoder();
		
		// Methods
		static jstring decode(jstring arg0);
		static jstring decode(jstring arg0, jstring arg1);
		static jstring decode(jstring arg0, java::nio::charset::Charset arg1);
	};
} // namespace java::net

