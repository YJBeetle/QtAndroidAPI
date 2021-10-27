#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./ClassFormatError.hpp"


namespace java::lang
{
	class UnsupportedClassVersionError : public java::lang::ClassFormatError
	{
	public:
		// Fields
		
		UnsupportedClassVersionError(QAndroidJniObject obj);
		// Constructors
		UnsupportedClassVersionError();
		UnsupportedClassVersionError(jstring &arg0);
		UnsupportedClassVersionError(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

