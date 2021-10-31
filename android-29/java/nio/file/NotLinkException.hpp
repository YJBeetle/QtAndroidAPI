#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class NotLinkException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		NotLinkException(QAndroidJniObject obj);
		// Constructors
		NotLinkException(jstring arg0);
		NotLinkException(jstring arg0, jstring arg1, jstring arg2);
		NotLinkException() = default;
		
		// Methods
	};
} // namespace java::nio::file

