#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class AccessDeniedException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		AccessDeniedException(QAndroidJniObject obj);
		// Constructors
		AccessDeniedException(jstring arg0);
		AccessDeniedException(jstring arg0, jstring arg1, jstring arg2);
		AccessDeniedException() = default;
		
		// Methods
	};
} // namespace java::nio::file

