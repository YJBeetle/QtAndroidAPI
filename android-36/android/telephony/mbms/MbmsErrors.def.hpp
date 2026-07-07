#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::mbms
{
	class MbmsErrors : public JObject
	{
	public:
		// Fields
		static jint ERROR_MIDDLEWARE_LOST();
		static jint ERROR_MIDDLEWARE_NOT_BOUND();
		static jint ERROR_NO_UNIQUE_MIDDLEWARE();
		static jint SUCCESS();
		static jint UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsErrors(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsErrors(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::mbms

