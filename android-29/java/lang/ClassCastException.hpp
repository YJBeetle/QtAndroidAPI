#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class ClassCastException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClassCastException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ClassCastException(QAndroidJniObject obj);
		
		// Constructors
		ClassCastException();
		ClassCastException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

