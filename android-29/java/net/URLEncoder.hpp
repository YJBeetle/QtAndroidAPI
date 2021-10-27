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
		
		URLEncoder(QAndroidJniObject obj);
		// Constructors
		URLEncoder() = default;
		
		// Methods
		static jstring encode(jstring arg0);
		static jstring encode(const QString &arg0);
		static jstring encode(jstring arg0, jstring arg1);
		static jstring encode(const QString &arg0, const QString &arg1);
		static jstring encode(jstring arg0, java::nio::charset::Charset arg1);
		static jstring encode(const QString &arg0, java::nio::charset::Charset arg1);
	};
} // namespace java::net

