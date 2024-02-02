#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::topics
{
	class GetTopicsRequest;
}
class JString;

namespace android::adservices::topics
{
	class GetTopicsRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetTopicsRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetTopicsRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetTopicsRequest_Builder();
		
		// Methods
		android::adservices::topics::GetTopicsRequest build() const;
		android::adservices::topics::GetTopicsRequest_Builder setAdsSdkName(JString arg0) const;
		android::adservices::topics::GetTopicsRequest_Builder setShouldRecordObservation(jboolean arg0) const;
	};
} // namespace android::adservices::topics

