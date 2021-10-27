#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

namespace java::io
{
	class IOException;
}
namespace java::io
{
	class ObjectInputStream;
}

namespace java::io
{
	class UncheckedIOException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		UncheckedIOException(QAndroidJniObject obj);
		// Constructors
		UncheckedIOException(java::io::IOException &arg0);
		UncheckedIOException(jstring &arg0, java::io::IOException &arg1);
		UncheckedIOException(const QString &arg0, java::io::IOException &arg1);
		UncheckedIOException() = default;
		
		// Methods
		QAndroidJniObject getCause();
	};
} // namespace java::io

