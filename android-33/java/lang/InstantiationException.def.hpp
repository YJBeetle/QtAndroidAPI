#pragma once

#include "./ReflectiveOperationException.def.hpp"

class JString;

namespace java::lang
{
	class InstantiationException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InstantiationException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		InstantiationException(QJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
		
		// Constructors
		InstantiationException();
		InstantiationException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

