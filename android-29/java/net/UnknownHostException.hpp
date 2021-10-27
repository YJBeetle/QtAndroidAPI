#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class UnknownHostException : public java::io::IOException
	{
	public:
		// Fields
		
		UnknownHostException(QAndroidJniObject obj);
		// Constructors
		UnknownHostException();
		UnknownHostException(jstring &arg0);
		UnknownHostException(const QString &arg0);
		
		// Methods
	};
} // namespace java::net

