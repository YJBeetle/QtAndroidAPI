#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class SyncStats : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jlong numAuthExceptions();
		jlong numConflictDetectedExceptions();
		jlong numDeletes();
		jlong numEntries();
		jlong numInserts();
		jlong numIoExceptions();
		jlong numParseExceptions();
		jlong numSkippedEntries();
		jlong numUpdates();
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncStats(QJniObject obj);
		
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

