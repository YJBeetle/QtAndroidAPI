#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"


namespace java::lang
{
	class NoSuchMethodException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchMethodException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchMethodException(QJniObject obj);
		
		// Constructors
		NoSuchMethodException();
		NoSuchMethodException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

