#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class SyncStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jlong numAuthExceptions();
		jlong numConflictDetectedExceptions();
		jlong numDeletes();
		jlong numEntries();
		jlong numInserts();
		jlong numIoExceptions();
		jlong numParseExceptions();
		jlong numSkippedEntries();
		jlong numUpdates();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SyncStats(QAndroidJniObject obj);
		
		// Constructors
		SyncStats();
		SyncStats(android::os::Parcel arg0);
		
		// Methods
		void clear();
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

