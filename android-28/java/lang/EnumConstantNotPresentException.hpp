#pragma once

#include "./RuntimeException.hpp"

class JClass;
class JString;

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
		EnumConstantNotPresentException(JClass arg0, JString arg1);
		
		// Methods
		JString constantName() const;
		JClass enumType() const;
	};
} // namespace java::lang

