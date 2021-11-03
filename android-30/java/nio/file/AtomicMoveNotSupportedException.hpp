#pragma once

#include "./FileSystemException.hpp"

class JString;

namespace java::nio::file
{
	class AtomicMoveNotSupportedException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicMoveNotSupportedException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		AtomicMoveNotSupportedException(QJniObject obj);
		
		// Constructors
		AtomicMoveNotSupportedException(JString arg0, JString arg1, JString arg2);
		
		// Methods
	};
} // namespace java::nio::file

