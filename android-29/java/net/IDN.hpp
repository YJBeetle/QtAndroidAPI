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
		
		IDN(QAndroidJniObject obj);
		// Constructors
		IDN() = default;
		
		// Methods
		static jstring toASCII(jstring arg0);
		static jstring toASCII(jstring arg0, jint arg1);
		static jstring toUnicode(jstring arg0);
		static jstring toUnicode(jstring arg0, jint arg1);
	};
} // namespace java::net

