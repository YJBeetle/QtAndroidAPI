#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::os
{
	class BadParcelableException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BadParcelableException(const char *className, const char *sig, Ts...agv) : android::util::AndroidRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		BadParcelableException(QAndroidJniObject obj);
		
		// Constructors
		BadParcelableException(java::lang::Exception arg0);
		BadParcelableException(jstring arg0);
		
		// Methods
	};
} // namespace android::os

