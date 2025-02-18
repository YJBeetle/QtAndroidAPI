#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv
{
	class TvRecordingInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FRIDAY();
		static jint MONDAY();
		static jint RECORDING_ALL();
		static jint RECORDING_IN_PROGRESS();
		static jint RECORDING_SCHEDULED();
		static jint SATURDAY();
		static jint SUNDAY();
		static jint THURSDAY();
		static jint TUESDAY();
		static jint WEDNESDAY();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvRecordingInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvRecordingInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvRecordingInfo(JString arg0, jlong arg1, jlong arg2, jint arg3, JString arg4, JString arg5, jlong arg6, jlong arg7, android::net::Uri arg8, android::net::Uri arg9, JObject arg10, android::net::Uri arg11, jlong arg12, jlong arg13);
		
		// Methods
		jint describeContents() const;
		android::net::Uri getChannelUri() const;
		JObject getContentRatings() const;
		JString getDescription() const;
		jlong getEndPaddingMillis() const;
		JString getName() const;
		android::net::Uri getProgramUri() const;
		jlong getRecordingDurationMillis() const;
		JString getRecordingId() const;
		jlong getRecordingStartTimeMillis() const;
		android::net::Uri getRecordingUri() const;
		jint getRepeatDays() const;
		jlong getScheduledDurationMillis() const;
		jlong getScheduledStartTimeMillis() const;
		jlong getStartPaddingMillis() const;
		void setDescription(JString arg0) const;
		void setName(JString arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

