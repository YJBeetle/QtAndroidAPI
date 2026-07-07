#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}

namespace android::app::job
{
	class PendingJobReasonsInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PendingJobReasonsInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PendingJobReasonsInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PendingJobReasonsInfo(jlong arg0, JIntArray arg1);
		
		// Methods
		jint describeContents() const;
		JIntArray getPendingJobReasons() const;
		jlong getTimestampMillis() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::job

