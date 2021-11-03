#pragma once

#include "./FileSystemException.hpp"

class JString;

namespace java::nio::file
{
	class NotLinkException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotLinkException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		NotLinkException(QAndroidJniObject obj);
		
		// Constructors
		NotLinkException(JString arg0);
		NotLinkException(JString arg0, JString arg1, JString arg2);
		
		// Methods
	};
} // namespace java::nio::file

