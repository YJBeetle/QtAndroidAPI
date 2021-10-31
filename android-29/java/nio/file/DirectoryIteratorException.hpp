#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../util/ConcurrentModificationException.hpp"

namespace java::io
{
	class IOException;
}
namespace java::io
{
	class ObjectInputStream;
}

namespace java::nio::file
{
	class DirectoryIteratorException : public java::util::ConcurrentModificationException
	{
	public:
		// Fields
		
		DirectoryIteratorException(QAndroidJniObject obj);
		// Constructors
		DirectoryIteratorException(java::io::IOException arg0);
		DirectoryIteratorException() = default;
		
		// Methods
		QAndroidJniObject getCause();
	};
} // namespace java::nio::file

