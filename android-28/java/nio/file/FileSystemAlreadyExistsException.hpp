#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


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
		FileSystemAlreadyExistsException(jstring arg0);
		
		// Methods
	};
} // namespace java::nio::file

