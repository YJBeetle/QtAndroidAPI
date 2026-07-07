#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::os
{
	class ProfilingResult : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ERROR_FAILED_EXECUTING();
		static jint ERROR_FAILED_INVALID_REQUEST();
		static jint ERROR_FAILED_NO_DISK_SPACE();
		static jint ERROR_FAILED_POST_PROCESSING();
		static jint ERROR_FAILED_PROFILING_IN_PROGRESS();
		static jint ERROR_FAILED_RATE_LIMIT_PROCESS();
		static jint ERROR_FAILED_RATE_LIMIT_SYSTEM();
		static jint ERROR_NONE();
		static jint ERROR_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit ProfilingResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProfilingResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getErrorCode() const;
		JString getErrorMessage() const;
		JString getResultFilePath() const;
		JString getTag() const;
		jint getTriggerType() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

