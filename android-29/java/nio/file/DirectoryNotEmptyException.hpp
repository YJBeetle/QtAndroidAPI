#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class DirectoryNotEmptyException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		DirectoryNotEmptyException(QAndroidJniObject obj);
		// Constructors
		DirectoryNotEmptyException(jstring &arg0);
		DirectoryNotEmptyException(const QString &arg0);
		DirectoryNotEmptyException() = default;
		
		// Methods
	};
} // namespace java::nio::file

