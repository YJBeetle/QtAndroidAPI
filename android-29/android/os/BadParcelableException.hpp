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
		
		BadParcelableException(QAndroidJniObject obj);
		// Constructors
		BadParcelableException(java::lang::Exception &arg0);
		BadParcelableException(jstring &arg0);
		BadParcelableException(const QString &arg0);
		BadParcelableException() = default;
		
		// Methods
	};
} // namespace android::os

