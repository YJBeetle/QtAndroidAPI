#pragma once

#include "../../../java/lang/RuntimeException.def.hpp"

namespace android::health::connect
{
	class HealthConnectException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static jint ERROR_DATA_SYNC_IN_PROGRESS();
		static jint ERROR_INTERNAL();
		static jint ERROR_INVALID_ARGUMENT();
		static jint ERROR_IO();
		static jint ERROR_RATE_LIMIT_EXCEEDED();
		static jint ERROR_REMOTE();
		static jint ERROR_SECURITY();
		static jint ERROR_UNKNOWN();
		static jint ERROR_UNSUPPORTED_OPERATION();
		
		// QJniObject forward
		template<typename ...Ts> explicit HealthConnectException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		HealthConnectException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		
		// Methods
		jint getErrorCode() const;
	};
} // namespace android::health::connect

