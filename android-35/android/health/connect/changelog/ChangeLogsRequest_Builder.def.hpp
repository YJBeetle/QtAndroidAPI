#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::changelog
{
	class ChangeLogsRequest;
}
class JString;

namespace android::health::connect::changelog
{
	class ChangeLogsRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChangeLogsRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChangeLogsRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ChangeLogsRequest_Builder(JString arg0);
		
		// Methods
		android::health::connect::changelog::ChangeLogsRequest build() const;
		android::health::connect::changelog::ChangeLogsRequest_Builder setPageSize(jint arg0) const;
	};
} // namespace android::health::connect::changelog

