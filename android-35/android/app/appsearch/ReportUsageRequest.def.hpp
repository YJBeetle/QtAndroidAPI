#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::appsearch
{
	class ReportUsageRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ReportUsageRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportUsageRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getDocumentId() const;
		JString getNamespace() const;
		jlong getUsageTimestampMillis() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

