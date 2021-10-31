#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class FileSystemLoopException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		FileSystemLoopException(QAndroidJniObject obj);
		// Constructors
		FileSystemLoopException(jstring arg0);
		FileSystemLoopException() = default;
		
		// Methods
	};
} // namespace java::nio::file

