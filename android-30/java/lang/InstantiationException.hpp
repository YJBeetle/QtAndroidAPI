#pragma once

#include "../../JObject.hpp"
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"


namespace java::lang
{
	class InstantiationException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InstantiationException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		InstantiationException(QJniObject obj);
		
		// Constructors
		InstantiationException();
		InstantiationException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

