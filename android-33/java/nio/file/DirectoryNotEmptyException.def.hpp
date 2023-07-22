#pragma once

#include "./FileSystemException.def.hpp"

class JString;

namespace java::nio::file
{
	class DirectoryNotEmptyException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DirectoryNotEmptyException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		DirectoryNotEmptyException(QAndroidJniObject obj) : java::nio::file::FileSystemException(obj) {}
		
		// Constructors
		DirectoryNotEmptyException(JString arg0);
		
		// Methods
	};
} // namespace java::nio::file

