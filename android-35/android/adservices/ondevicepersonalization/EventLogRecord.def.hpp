#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class RequestLogRecord;
}
namespace android::content
{
	class ContentValues;
}
namespace android::os
{
	class Parcel;
}
class JObject;
namespace java::time
{
	class Instant;
}

namespace android::adservices::ondevicepersonalization
{
	class EventLogRecord : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit EventLogRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventLogRecord(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::content::ContentValues getData() const;
		android::adservices::ondevicepersonalization::RequestLogRecord getRequestLogRecord() const;
		jint getRowIndex() const;
		java::time::Instant getTime() const;
		jint getType() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::ondevicepersonalization

