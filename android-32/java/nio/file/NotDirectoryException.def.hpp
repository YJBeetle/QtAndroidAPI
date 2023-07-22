#pragma once

#include "./FileSystemException.def.hpp"

class JString;

namespace java::nio::file
{
	class NotDirectoryException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NotDirectoryException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		NotDirectoryException(QJniObject obj) : java::nio::file::FileSystemException(obj) {}
		
		// Constructors
		NotDirectoryException(JString arg0);
		
		// Methods
	};
} // namespace java::nio::file

