#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


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
		UnsupportedOperationException(jstring arg0);
		UnsupportedOperationException(jthrowable arg0);
		UnsupportedOperationException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

