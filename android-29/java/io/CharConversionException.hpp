#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"


namespace java::io
{
	class CharConversionException : public java::io::IOException
	{
	public:
		// Fields
		
		CharConversionException(QAndroidJniObject obj);
		// Constructors
		CharConversionException();
		CharConversionException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

