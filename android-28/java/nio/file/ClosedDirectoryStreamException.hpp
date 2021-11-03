#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::file
{
	class ClosedDirectoryStreamException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClosedDirectoryStreamException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ClosedDirectoryStreamException(QJniObject obj);
		
		// Constructors
		ClosedDirectoryStreamException();
		
		// Methods
	};
} // namespace java::nio::file

