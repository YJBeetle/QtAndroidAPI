#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class MissingFormatWidthException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		MissingFormatWidthException(QAndroidJniObject obj);
		// Constructors
		MissingFormatWidthException(jstring &arg0);
		MissingFormatWidthException(const QString &arg0);
		MissingFormatWidthException() = default;
		
		// Methods
		jstring getFormatSpecifier();
		jstring getMessage();
	};
} // namespace java::util

