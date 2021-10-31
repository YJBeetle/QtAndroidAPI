#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class StorageStats : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit StorageStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StorageStats(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jlong getAppBytes();
		jlong getCacheBytes();
		jlong getDataBytes();
		jlong getExternalCacheBytes();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

