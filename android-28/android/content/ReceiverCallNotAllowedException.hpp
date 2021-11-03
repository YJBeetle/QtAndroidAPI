#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"


namespace android::content
{
	class ReceiverCallNotAllowedException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReceiverCallNotAllowedException(const char *className, const char *sig, Ts...agv) : android::util::AndroidRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ReceiverCallNotAllowedException(QAndroidJniObject obj);
		
		// Constructors
		ReceiverCallNotAllowedException(jstring arg0);
		
		// Methods
	};
} // namespace android::content

