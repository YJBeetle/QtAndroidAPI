#pragma once

#include "../../JObject.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class ArrayStoreException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArrayStoreException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ArrayStoreException(QJniObject obj);
		
		// Constructors
		ArrayStoreException();
		ArrayStoreException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

