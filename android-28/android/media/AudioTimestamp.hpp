#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioTimestamp : public JObject
	{
	public:
		// Fields
		static jint TIMEBASE_BOOTTIME();
		static jint TIMEBASE_MONOTONIC();
		jlong framePosition();
		jlong nanoTime();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioTimestamp(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioTimestamp(QJniObject obj);
		
		// Constructors
		AudioTimestamp();
		
		// Methods
	};
} // namespace android::media

