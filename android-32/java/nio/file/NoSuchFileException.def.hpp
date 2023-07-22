#pragma once

#include "./FileSystemException.def.hpp"

class JString;

namespace java::nio::file
{
	class NoSuchFileException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchFileException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchFileException(QJniObject obj) : java::nio::file::FileSystemException(obj) {}
		
		// Constructors
		NoSuchFileException(JString arg0);
		NoSuchFileException(JString arg0, JString arg1, JString arg2);
		
		// Methods
	};
} // namespace java::nio::file

