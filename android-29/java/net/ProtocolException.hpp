#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class ProtocolException : public java::io::IOException
	{
	public:
		// Fields
		
		ProtocolException(QAndroidJniObject obj);
		// Constructors
		ProtocolException();
		ProtocolException(jstring arg0);
		
		// Methods
	};
} // namespace java::net

