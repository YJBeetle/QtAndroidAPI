#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::time
{
	class Duration;
}

namespace android::hardware
{
	class SyncFence : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jlong SIGNAL_TIME_INVALID();
		static jlong SIGNAL_TIME_PENDING();
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncFence(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncFence(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean await(java::time::Duration arg0) const;
		jboolean awaitForever() const;
		void close() const;
		jint describeContents() const;
		jlong getSignalTime() const;
		jboolean isValid() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware

