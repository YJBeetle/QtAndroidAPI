#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::charset
{
	class IllegalCharsetNameException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		IllegalCharsetNameException(QAndroidJniObject obj);
		// Constructors
		IllegalCharsetNameException(jstring &arg0);
		IllegalCharsetNameException(const QString &arg0);
		IllegalCharsetNameException() = default;
		
		// Methods
		jstring getCharsetName();
	};
} // namespace java::nio::charset

