#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"

namespace java::lang
{
	class Exception;
}

namespace java::io
{
	class WriteAbortedException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		QAndroidJniObject detail();
		
		WriteAbortedException(QAndroidJniObject obj);
		// Constructors
		WriteAbortedException(jstring arg0, java::lang::Exception arg1);
		WriteAbortedException() = default;
		
		// Methods
		jthrowable getCause();
		jstring getMessage();
	};
} // namespace java::io

