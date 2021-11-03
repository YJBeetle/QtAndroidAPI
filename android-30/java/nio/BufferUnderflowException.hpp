#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::nio
{
	class BufferUnderflowException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BufferUnderflowException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		BufferUnderflowException(QJniObject obj);
		
		// Constructors
		BufferUnderflowException();
		
		// Methods
	};
} // namespace java::nio

