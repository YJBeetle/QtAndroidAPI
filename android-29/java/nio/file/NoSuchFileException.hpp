#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class NoSuchFileException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		NoSuchFileException(QAndroidJniObject obj);
		// Constructors
		NoSuchFileException(jstring arg0);
		NoSuchFileException(jstring arg0, jstring arg1, jstring arg2);
		NoSuchFileException() = default;
		
		// Methods
	};
} // namespace java::nio::file

