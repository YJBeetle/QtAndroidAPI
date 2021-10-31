#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class TypeNotPresentException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TypeNotPresentException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		TypeNotPresentException(QJniObject obj);
		
		// Constructors
		TypeNotPresentException(jstring arg0, jthrowable arg1);
		
		// Methods
		jstring typeName();
	};
} // namespace java::lang

