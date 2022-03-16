#pragma once

#include "./ReflectiveOperationException.hpp"

class JString;

namespace java::lang
{
	class InstantiationException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InstantiationException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		InstantiationException(QAndroidJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
		
		// Constructors
		InstantiationException();
		InstantiationException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

