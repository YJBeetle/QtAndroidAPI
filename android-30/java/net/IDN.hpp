#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class StringBuffer;
}

namespace java::net
{
	class IDN : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALLOW_UNASSIGNED();
		static jint USE_STD3_ASCII_RULES();
		
		// QJniObject forward
		template<typename ...Ts> explicit IDN(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IDN(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring toASCII(jstring arg0);
		static jstring toASCII(jstring arg0, jint arg1);
		static jstring toUnicode(jstring arg0);
		static jstring toUnicode(jstring arg0, jint arg1);
	};
} // namespace java::net

