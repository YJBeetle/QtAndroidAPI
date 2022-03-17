#pragma once

#include "../../lang/RuntimeException.def.hpp"

class JString;

namespace java::nio::file
{
	class FileSystemNotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileSystemNotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemNotFoundException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		FileSystemNotFoundException();
		FileSystemNotFoundException(JString arg0);
		
		// Methods
	};
} // namespace java::nio::file

