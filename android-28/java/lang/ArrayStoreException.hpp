#pragma once

#include "./RuntimeException.hpp"

class JString;

namespace java::lang
{
	class ArrayStoreException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArrayStoreException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ArrayStoreException(QAndroidJniObject obj);
		
		// Constructors
		ArrayStoreException();
		ArrayStoreException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

