#pragma once

#include "./ObjectStreamException.hpp"

namespace java::lang
{
	class Exception;
}
class JString;
class JThrowable;

namespace java::io
{
	class WriteAbortedException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		java::lang::Exception detail();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WriteAbortedException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		WriteAbortedException(QAndroidJniObject obj);
		
		// Constructors
		WriteAbortedException(JString arg0, java::lang::Exception arg1);
		
		// Methods
		JThrowable getCause() const;
		JString getMessage() const;
	};
} // namespace java::io

