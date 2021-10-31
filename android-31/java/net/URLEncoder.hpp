#pragma once

#include "../../__JniBaseClass.hpp"

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
	class URLEncoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit URLEncoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		URLEncoder(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring encode(jstring arg0);
		static jstring encode(jstring arg0, jstring arg1);
		static jstring encode(jstring arg0, java::nio::charset::Charset arg1);
	};
} // namespace java::net

