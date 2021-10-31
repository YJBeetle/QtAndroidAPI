#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace java::nio::file
{
	class FileSystemNotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileSystemNotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemNotFoundException(QAndroidJniObject obj);
		
		// Constructors
		FileSystemNotFoundException();
		FileSystemNotFoundException(jstring arg0);
		
		// Methods
	};
} // namespace java::nio::file

