#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"


namespace java::io
{
	class UnsupportedEncodingException : public java::io::IOException
	{
	public:
		// Fields
		
		UnsupportedEncodingException(QAndroidJniObject obj);
		// Constructors
		UnsupportedEncodingException();
		UnsupportedEncodingException(jstring &arg0);
		UnsupportedEncodingException(const QString &arg0);
		
		// Methods
	};
} // namespace java::io

