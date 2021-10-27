#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::charset
{
	class UnsupportedCharsetException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		UnsupportedCharsetException(QAndroidJniObject obj);
		// Constructors
		UnsupportedCharsetException(jstring &arg0);
		UnsupportedCharsetException(const QString &arg0);
		UnsupportedCharsetException() = default;
		
		// Methods
		jstring getCharsetName();
	};
} // namespace java::nio::charset

