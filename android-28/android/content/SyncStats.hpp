#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncStats(QAndroidJniObject obj);
		
		// Constructors
		SyncStats();
		SyncStats(android::os::Parcel arg0);
		
		// Methods
		void clear() const;
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

