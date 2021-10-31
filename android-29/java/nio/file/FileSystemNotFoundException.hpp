#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace java::nio::file
{
	class FileSystemNotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		FileSystemNotFoundException(QAndroidJniObject obj);
		// Constructors
		FileSystemNotFoundException();
		FileSystemNotFoundException(jstring arg0);
		
		// Methods
	};
} // namespace java::nio::file

