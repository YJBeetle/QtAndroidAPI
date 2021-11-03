#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class StringBuffer;
}

namespace java::net
{
	class IDN : public JObject
	{
	public:
		// Fields
		static jint ALLOW_UNASSIGNED();
		static jint USE_STD3_ASCII_RULES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IDN(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IDN(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring toASCII(jstring arg0);
		static jstring toASCII(jstring arg0, jint arg1);
		static jstring toUnicode(jstring arg0);
		static jstring toUnicode(jstring arg0, jint arg1);
	};
} // namespace java::net

