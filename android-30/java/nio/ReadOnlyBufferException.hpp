#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/UnsupportedOperationException.hpp"


namespace java::nio
{
	class ReadOnlyBufferException : public java::lang::UnsupportedOperationException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadOnlyBufferException(const char *className, const char *sig, Ts...agv) : java::lang::UnsupportedOperationException(className, sig, std::forward<Ts>(agv)...) {}
		ReadOnlyBufferException(QJniObject obj);
		
		// Constructors
		ReadOnlyBufferException();
		
		// Methods
	};
} // namespace java::nio

