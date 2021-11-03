#pragma once

#include "../../lang/RuntimeException.hpp"

class JString;

namespace java::nio::file
{
	class FileSystemAlreadyExistsException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileSystemAlreadyExistsException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemAlreadyExistsException(QJniObject obj);
		
		// Constructors
		FileSystemAlreadyExistsException();
		FileSystemAlreadyExistsException(JString arg0);
		
		// Methods
	};
} // namespace java::nio::file

