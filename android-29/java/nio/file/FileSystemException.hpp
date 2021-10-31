#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace java::nio::file
{
	class FileSystemException : public java::io::IOException
	{
	public:
		// Fields
		
		FileSystemException(QAndroidJniObject obj);
		// Constructors
		FileSystemException(jstring arg0);
		FileSystemException(jstring arg0, jstring arg1, jstring arg2);
		FileSystemException() = default;
		
		// Methods
		jstring getFile();
		jstring getMessage();
		jstring getOtherFile();
		jstring getReason();
	};
} // namespace java::nio::file

