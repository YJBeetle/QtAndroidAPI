#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio::charset
{
	class Charset;
}

namespace java::net
{
	class URLDecoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit URLDecoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		URLDecoder(QJniObject obj);
		
		// Constructors
		URLDecoder();
		
		// Methods
		static jstring decode(jstring arg0);
		static jstring decode(jstring arg0, jstring arg1);
		static jstring decode(jstring arg0, java::nio::charset::Charset arg1);
	};
} // namespace java::net

