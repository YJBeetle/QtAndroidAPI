#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class MalformedURLException : public java::io::IOException
	{
	public:
		// Fields
		
		MalformedURLException(QAndroidJniObject obj);
		// Constructors
		MalformedURLException();
		MalformedURLException(jstring &arg0);
		MalformedURLException(const QString &arg0);
		
		// Methods
	};
} // namespace java::net

