#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ActivityManager_MemoryInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jlong advertisedMem();
		jlong availMem();
		jboolean lowMemory();
		jlong threshold();
		jlong totalMem();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityManager_MemoryInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_MemoryInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ActivityManager_MemoryInfo();
		
		// Methods
		jint describeContents() const;
		void readFromParcel(android::os::Parcel arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

