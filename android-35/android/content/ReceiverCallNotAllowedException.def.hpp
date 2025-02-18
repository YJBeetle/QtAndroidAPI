#pragma once

#include "../util/AndroidRuntimeException.def.hpp"

class JString;

namespace android::content
{
	class ReceiverCallNotAllowedException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReceiverCallNotAllowedException(const char *className, const char *sig, Ts...agv) : android::util::AndroidRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ReceiverCallNotAllowedException(QJniObject obj) : android::util::AndroidRuntimeException(obj) {}
		
		// Constructors
		ReceiverCallNotAllowedException(JString arg0);
		
		// Methods
	};
} // namespace android::content

