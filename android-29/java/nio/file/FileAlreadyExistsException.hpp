#pragma once

#include "./FileSystemException.hpp"

class JString;

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
		FileAlreadyExistsException(JString arg0);
		FileAlreadyExistsException(JString arg0, JString arg1, JString arg2);
		
		// Methods
	};
} // namespace java::nio::file

