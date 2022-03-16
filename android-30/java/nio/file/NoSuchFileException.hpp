#pragma once

#include "./FileSystemException.hpp"

class JString;

namespace java::nio::file
{
	class NoSuchFileException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoSuchFileException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchFileException(QAndroidJniObject obj) : java::nio::file::FileSystemException(obj) {}
		
		// Constructors
		NoSuchFileException(JString arg0);
		NoSuchFileException(JString arg0, JString arg1, JString arg2);
		
		// Methods
	};
} // namespace java::nio::file

