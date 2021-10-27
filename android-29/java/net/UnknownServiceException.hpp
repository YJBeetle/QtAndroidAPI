#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class UnknownServiceException : public java::io::IOException
	{
	public:
		// Fields
		
		UnknownServiceException(QAndroidJniObject obj);
		// Constructors
		UnknownServiceException();
		UnknownServiceException(jstring &arg0);
		UnknownServiceException(const QString &arg0);
		
		// Methods
	};
} // namespace java::net

