#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class NotDirectoryException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		NotDirectoryException(QAndroidJniObject obj);
		// Constructors
		NotDirectoryException(jstring &arg0);
		NotDirectoryException(const QString &arg0);
		NotDirectoryException() = default;
		
		// Methods
	};
} // namespace java::nio::file

