#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::adservices::topics
{
	class GetTopicsRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetTopicsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetTopicsRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getAdsSdkName() const;
		jboolean shouldRecordObservation() const;
	};
} // namespace android::adservices::topics

