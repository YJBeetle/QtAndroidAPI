#pragma once

#include "../../util/ConcurrentModificationException.hpp"

namespace java::io
{
	class IOException;
}
namespace java::io
{
	class ObjectInputStream;
}
class JThrowable;

namespace java::nio::file
{
	class DirectoryIteratorException : public java::util::ConcurrentModificationException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DirectoryIteratorException(const char *className, const char *sig, Ts...agv) : java::util::ConcurrentModificationException(className, sig, std::forward<Ts>(agv)...) {}
		DirectoryIteratorException(QAndroidJniObject obj);
		
		// Constructors
		DirectoryIteratorException(java::io::IOException arg0);
		
		// Methods
		java::io::IOException getCause() const;
	};
} // namespace java::nio::file

