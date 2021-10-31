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
		
		// QJniObject forward
		template<typename ...Ts> explicit FileAlreadyExistsException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		FileAlreadyExistsException(QJniObject obj);
		
		// Constructors
		FileAlreadyExistsException(jstring arg0);
		FileAlreadyExistsException(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace java::nio::file

