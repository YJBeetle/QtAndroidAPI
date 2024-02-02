#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::adservices::topics
{
	class GetTopicsResponse : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetTopicsResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetTopicsResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getTopics() const;
		jint hashCode() const;
	};
} // namespace android::adservices::topics

