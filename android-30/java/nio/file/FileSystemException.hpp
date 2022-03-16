#pragma once

#include "../../io/IOException.hpp"

class JString;

namespace java::nio::file
{
	class FileSystemException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileSystemException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemException(QAndroidJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		FileSystemException(JString arg0);
		FileSystemException(JString arg0, JString arg1, JString arg2);
		
		// Methods
		JString getFile() const;
		JString getMessage() const;
		JString getOtherFile() const;
		JString getReason() const;
	};
} // namespace java::nio::file

