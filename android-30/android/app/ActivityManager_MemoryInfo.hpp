#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ActivityManager_MemoryInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jlong availMem();
		jboolean lowMemory();
		jlong threshold();
		jlong totalMem();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityManager_MemoryInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_MemoryInfo(QJniObject obj);
		
		// Constructors
		ActivityManager_MemoryInfo();
		
		// Methods
		jint describeContents();
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

