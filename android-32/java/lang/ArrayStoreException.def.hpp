#pragma once

#include "./RuntimeException.def.hpp"

class JString;

namespace java::lang
{
	class ArrayStoreException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArrayStoreException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ArrayStoreException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		ArrayStoreException();
		ArrayStoreException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

