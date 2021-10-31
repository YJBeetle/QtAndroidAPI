#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class SyncStats;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class SyncResult : public __JniBaseClass
	{
	public:
		// Fields
		static android::content::SyncResult ALREADY_IN_PROGRESS();
		static __JniBaseClass CREATOR();
		jboolean databaseError();
		jlong delayUntil();
		jboolean fullSyncRequested();
		jboolean moreRecordsToGet();
		jboolean partialSyncUnavailable();
		android::content::SyncStats stats();
		jboolean syncAlreadyInProgress();
		jboolean tooManyDeletions();
		jboolean tooManyRetries();
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SyncResult(QJniObject obj);
		
		// Constructors
		SyncResult();
		
		// Methods
		void clear();
		jint describeContents();
		jboolean hasError();
		jboolean hasHardError();
		jboolean hasSoftError();
		jboolean madeSomeProgress();
		jstring toDebugString();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

