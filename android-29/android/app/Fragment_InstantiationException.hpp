#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::app
{
	class Fragment_InstantiationException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		Fragment_InstantiationException(QAndroidJniObject obj);
		// Constructors
		Fragment_InstantiationException(jstring arg0, java::lang::Exception arg1);
		Fragment_InstantiationException() = default;
		
		// Methods
	};
} // namespace android::app

