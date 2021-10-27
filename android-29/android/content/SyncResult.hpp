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
		static QAndroidJniObject ALREADY_IN_PROGRESS();
		static QAndroidJniObject CREATOR();
		jboolean databaseError();
		jlong delayUntil();
		jboolean fullSyncRequested();
		jboolean moreRecordsToGet();
		jboolean partialSyncUnavailable();
		QAndroidJniObject stats();
		jboolean syncAlreadyInProgress();
		jboolean tooManyDeletions();
		jboolean tooManyRetries();
		
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
		jstring toDebugString();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

