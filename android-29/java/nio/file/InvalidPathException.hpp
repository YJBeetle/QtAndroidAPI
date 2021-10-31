#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::file
{
	class InvalidPathException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		InvalidPathException(QAndroidJniObject obj);
		// Constructors
		InvalidPathException(jstring arg0, jstring arg1);
		InvalidPathException(jstring arg0, jstring arg1, jint arg2);
		InvalidPathException() = default;
		
		// Methods
		jint getIndex();
		jstring getInput();
		jstring getMessage();
		jstring getReason();
	};
} // namespace java::nio::file

