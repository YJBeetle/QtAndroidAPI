#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class FileAlreadyExistsException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		FileAlreadyExistsException(QAndroidJniObject obj);
		// Constructors
		FileAlreadyExistsException(jstring &arg0);
		FileAlreadyExistsException(const QString &arg0);
		FileAlreadyExistsException(jstring &arg0, jstring &arg1, jstring &arg2);
		FileAlreadyExistsException(const QString &arg0, const QString &arg1, const QString &arg2);
		FileAlreadyExistsException() = default;
		
		// Methods
	};
} // namespace java::nio::file

