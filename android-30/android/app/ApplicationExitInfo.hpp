#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}
namespace java::io
{
	class InputStream;
}

namespace android::app
{
	class ApplicationExitInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint REASON_ANR();
		static jint REASON_CRASH();
		static jint REASON_CRASH_NATIVE();
		static jint REASON_DEPENDENCY_DIED();
		static jint REASON_EXCESSIVE_RESOURCE_USAGE();
		static jint REASON_EXIT_SELF();
		static jint REASON_INITIALIZATION_FAILURE();
		static jint REASON_LOW_MEMORY();
		static jint REASON_OTHER();
		static jint REASON_PERMISSION_CHANGE();
		static jint REASON_SIGNALED();
		static jint REASON_UNKNOWN();
		static jint REASON_USER_REQUESTED();
		static jint REASON_USER_STOPPED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationExitInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationExitInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getDefiningUid();
		jstring getDescription();
		jint getImportance();
		jint getPackageUid();
		jint getPid();
		jstring getProcessName();
		jbyteArray getProcessStateSummary();
		jlong getPss();
		jint getRealUid();
		jint getReason();
		jlong getRss();
		jint getStatus();
		jlong getTimestamp();
		java::io::InputStream getTraceInputStream();
		android::os::UserHandle getUserHandle();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

