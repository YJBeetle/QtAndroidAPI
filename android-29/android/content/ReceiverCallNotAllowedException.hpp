#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"


namespace android::content
{
	class ReceiverCallNotAllowedException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		ReceiverCallNotAllowedException(QAndroidJniObject obj);
		// Constructors
		ReceiverCallNotAllowedException(jstring arg0);
		ReceiverCallNotAllowedException() = default;
		
		// Methods
	};
} // namespace android::content

