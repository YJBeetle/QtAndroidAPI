#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::topics
{
	class GetTopicsResponse;
}

namespace android::adservices::topics
{
	class GetTopicsResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetTopicsResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetTopicsResponse_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetTopicsResponse_Builder(JObject arg0);
		
		// Methods
		android::adservices::topics::GetTopicsResponse build() const;
	};
} // namespace android::adservices::topics

