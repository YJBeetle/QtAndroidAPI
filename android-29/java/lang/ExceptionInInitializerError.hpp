#pragma once

#include "./LinkageError.hpp"

class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JString;
class JThrowable;

namespace java::lang
{
	class ExceptionInInitializerError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExceptionInInitializerError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		ExceptionInInitializerError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
		
		// Constructors
		ExceptionInInitializerError();
		ExceptionInInitializerError(JString arg0);
		ExceptionInInitializerError(JThrowable arg0);
		
		// Methods
		JThrowable getException() const;
	};
} // namespace java::lang

