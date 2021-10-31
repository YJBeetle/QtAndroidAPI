#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class EnumConstantNotPresentException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EnumConstantNotPresentException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		EnumConstantNotPresentException(QAndroidJniObject obj);
		
		// Constructors
		EnumConstantNotPresentException(jclass arg0, jstring arg1);
		
		// Methods
		jstring constantName();
		jclass enumType();
	};
} // namespace java::lang

