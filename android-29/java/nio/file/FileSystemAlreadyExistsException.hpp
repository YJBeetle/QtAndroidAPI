#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace java::nio::file
{
	class FileSystemAlreadyExistsException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		FileSystemAlreadyExistsException(QAndroidJniObject obj);
		// Constructors
		FileSystemAlreadyExistsException();
		FileSystemAlreadyExistsException(jstring &arg0);
		FileSystemAlreadyExistsException(const QString &arg0);
		
		// Methods
	};
} // namespace java::nio::file

