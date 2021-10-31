#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"


namespace java::lang
{
	class IllegalAccessException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalAccessException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalAccessException(QAndroidJniObject obj);
		
		// Constructors
		IllegalAccessException();
		IllegalAccessException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

