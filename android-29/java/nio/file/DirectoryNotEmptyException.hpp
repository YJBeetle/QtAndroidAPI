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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DirectoryNotEmptyException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		DirectoryNotEmptyException(QAndroidJniObject obj);
		
		// Constructors
		DirectoryNotEmptyException(jstring arg0);
		
		// Methods
	};
} // namespace java::nio::file

