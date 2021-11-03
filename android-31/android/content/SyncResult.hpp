#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class SyncStats;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content
{
	class SyncResult : public JObject
	{
	public:
		// Fields
		static android::content::SyncResult ALREADY_IN_PROGRESS();
		static JObject CREATOR();
		jboolean databaseError();
		jlong delayUntil();
		jboolean fullSyncRequested();
		jboolean moreRecordsToGet();
		jboolean partialSyncUnavailable();
		android::content::SyncStats stats();
		jboolean syncAlreadyInProgress();
		jboolean tooManyDeletions();
		jboolean tooManyRetries();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncResult(QAndroidJniObject obj);
		
		// Constructors
		SyncResult();
		
		// Methods
		void clear();
		jint describeContents();
		jboolean hasError();
		jboolean hasHardError();
		jboolean hasSoftError();
		jboolean madeSomeProgress();
		JString toDebugString();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

