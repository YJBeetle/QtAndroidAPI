#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app
{
	class ApplicationStartInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint LAUNCH_MODE_SINGLE_INSTANCE();
		static jint LAUNCH_MODE_SINGLE_INSTANCE_PER_TASK();
		static jint LAUNCH_MODE_SINGLE_TASK();
		static jint LAUNCH_MODE_SINGLE_TOP();
		static jint LAUNCH_MODE_STANDARD();
		static jint STARTUP_STATE_ERROR();
		static jint STARTUP_STATE_FIRST_FRAME_DRAWN();
		static jint STARTUP_STATE_STARTED();
		static jint START_REASON_ALARM();
		static jint START_REASON_BACKUP();
		static jint START_REASON_BOOT_COMPLETE();
		static jint START_REASON_BROADCAST();
		static jint START_REASON_CONTENT_PROVIDER();
		static jint START_REASON_JOB();
		static jint START_REASON_LAUNCHER();
		static jint START_REASON_LAUNCHER_RECENTS();
		static jint START_REASON_OTHER();
		static jint START_REASON_PUSH();
		static jint START_REASON_SERVICE();
		static jint START_REASON_START_ACTIVITY();
		static jint START_TIMESTAMP_APPLICATION_ONCREATE();
		static jint START_TIMESTAMP_BIND_APPLICATION();
		static jint START_TIMESTAMP_FIRST_FRAME();
		static jint START_TIMESTAMP_FORK();
		static jint START_TIMESTAMP_FULLY_DRAWN();
		static jint START_TIMESTAMP_INITIAL_RENDERTHREAD_FRAME();
		static jint START_TIMESTAMP_LAUNCH();
		static jint START_TIMESTAMP_RESERVED_RANGE_DEVELOPER();
		static jint START_TIMESTAMP_RESERVED_RANGE_DEVELOPER_START();
		static jint START_TIMESTAMP_RESERVED_RANGE_SYSTEM();
		static jint START_TIMESTAMP_SURFACEFLINGER_COMPOSITION_COMPLETE();
		static jint START_TYPE_COLD();
		static jint START_TYPE_HOT();
		static jint START_TYPE_UNSET();
		static jint START_TYPE_WARM();
		
		// QJniObject forward
		template<typename ...Ts> explicit ApplicationStartInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationStartInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getDefiningUid() const;
		android::content::Intent getIntent() const;
		jint getLaunchMode() const;
		jint getPackageUid() const;
		jint getPid() const;
		JString getProcessName() const;
		jint getRealUid() const;
		jint getReason() const;
		jint getStartType() const;
		jint getStartupState() const;
		JObject getStartupTimestamps() const;
		jint hashCode() const;
		jboolean wasForceStopped() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

