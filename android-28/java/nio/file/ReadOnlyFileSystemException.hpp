#pragma once

#include "../../lang/UnsupportedOperationException.hpp"

namespace java::nio::file
{
	class ReadOnlyFileSystemException : public java::lang::UnsupportedOperationException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadOnlyFileSystemException(const char *className, const char *sig, Ts...agv) : java::lang::UnsupportedOperationException(className, sig, std::forward<Ts>(agv)...) {}
		ReadOnlyFileSystemException(QJniObject obj);
		
		// Constructors
		ReadOnlyFileSystemException();
		
		// Methods
	};
} // namespace java::nio::file

