#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media
{
	class AudioTimestamp : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TIMEBASE_BOOTTIME();
		static jint TIMEBASE_MONOTONIC();
		jlong framePosition();
		jlong nanoTime();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioTimestamp(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioTimestamp(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AudioTimestamp();
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

