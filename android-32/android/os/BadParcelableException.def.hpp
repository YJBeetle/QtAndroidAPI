#pragma once

#include "../util/AndroidRuntimeException.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BadParcelableException(const char *className, const char *sig, Ts...agv) : android::util::AndroidRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		BadParcelableException(QAndroidJniObject obj) : android::util::AndroidRuntimeException(obj) {}
		
		// Constructors
		BadParcelableException(java::lang::Exception arg0);
		BadParcelableException(JString arg0);
		
		// Methods
	};
} // namespace android::os

