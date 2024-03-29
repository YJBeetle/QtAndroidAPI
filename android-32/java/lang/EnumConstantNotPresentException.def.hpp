#pragma once

#include "./RuntimeException.def.hpp"

class JClass;
class JString;

namespace java::lang
{
	class EnumConstantNotPresentException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EnumConstantNotPresentException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		EnumConstantNotPresentException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		EnumConstantNotPresentException(JClass arg0, JString arg1);
		
		// Methods
		JString constantName() const;
		JClass enumType() const;
	};
} // namespace java::lang

