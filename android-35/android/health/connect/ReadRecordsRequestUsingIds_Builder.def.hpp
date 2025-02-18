#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class ReadRecordsRequestUsingIds;
}
class JClass;
class JString;

namespace android::health::connect
{
	class ReadRecordsRequestUsingIds_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadRecordsRequestUsingIds_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReadRecordsRequestUsingIds_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ReadRecordsRequestUsingIds_Builder(JClass arg0);
		
		// Methods
		android::health::connect::ReadRecordsRequestUsingIds_Builder addClientRecordId(JString arg0) const;
		android::health::connect::ReadRecordsRequestUsingIds_Builder addId(JString arg0) const;
		android::health::connect::ReadRecordsRequestUsingIds build() const;
	};
} // namespace android::health::connect

