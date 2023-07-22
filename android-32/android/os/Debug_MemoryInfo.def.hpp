#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::os
{
	class Debug_MemoryInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jint dalvikPrivateDirty();
		jint dalvikPss();
		jint dalvikSharedDirty();
		jint nativePrivateDirty();
		jint nativePss();
		jint nativeSharedDirty();
		jint otherPrivateDirty();
		jint otherPss();
		jint otherSharedDirty();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Debug_MemoryInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Debug_MemoryInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Debug_MemoryInfo();
		
		// Methods
		jint describeContents() const;
		JString getMemoryStat(JString arg0) const;
		JObject getMemoryStats() const;
		jint getTotalPrivateClean() const;
		jint getTotalPrivateDirty() const;
		jint getTotalPss() const;
		jint getTotalSharedClean() const;
		jint getTotalSharedDirty() const;
		jint getTotalSwappablePss() const;
		void readFromParcel(android::os::Parcel arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

