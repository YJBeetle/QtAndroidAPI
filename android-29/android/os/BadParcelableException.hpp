#pragma once

#include "../util/AndroidRuntimeException.hpp"

namespace java::lang
{
	class Exception;
}
class JString;

namespace android::os
{
	class BadParcelableException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BadParcelableException(const char *className, const char *sig, Ts...agv) : android::util::AndroidRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		BadParcelableException(QJniObject obj);
		
		// Constructors
		BadParcelableException(java::lang::Exception arg0);
		BadParcelableException(JString arg0);
		
		// Methods
	};
} // namespace android::os

