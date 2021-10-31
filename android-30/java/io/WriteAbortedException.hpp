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
		java::lang::Exception detail();
		
		// QJniObject forward
		template<typename ...Ts> explicit WriteAbortedException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		WriteAbortedException(QJniObject obj);
		
		// Constructors
		WriteAbortedException(jstring arg0, java::lang::Exception arg1);
		
		// Methods
		jthrowable getCause();
		jstring getMessage();
	};
} // namespace java::io

