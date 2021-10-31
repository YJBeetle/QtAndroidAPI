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
		
		// QJniObject forward
		template<typename ...Ts> explicit ReceiverCallNotAllowedException(const char *className, const char *sig, Ts...agv) : android::util::AndroidRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ReceiverCallNotAllowedException(QJniObject obj);
		
		// Constructors
		ReceiverCallNotAllowedException(jstring arg0);
		
		// Methods
	};
} // namespace android::content

