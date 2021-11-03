#pragma once

#include "./RuntimeException.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class UnsupportedOperationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsupportedOperationException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedOperationException(QJniObject obj);
		
		// Constructors
		UnsupportedOperationException();
		UnsupportedOperationException(JString arg0);
		UnsupportedOperationException(JThrowable arg0);
		UnsupportedOperationException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

