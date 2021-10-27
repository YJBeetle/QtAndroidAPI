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
		
		URLDecoder(QAndroidJniObject obj);
		// Constructors
		URLDecoder();
		
		// Methods
		static jstring decode(jstring arg0);
		static jstring decode(const QString &arg0);
		static jstring decode(jstring arg0, jstring arg1);
		static jstring decode(const QString &arg0, const QString &arg1);
		static jstring decode(jstring arg0, java::nio::charset::Charset arg1);
		static jstring decode(const QString &arg0, java::nio::charset::Charset arg1);
	};
} // namespace java::net

