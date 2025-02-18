#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::topics
{
	class GetTopicsRequest;
}
namespace android::content
{
	class Context;
}

namespace android::adservices::topics
{
	class TopicsManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TopicsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TopicsManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::adservices::topics::TopicsManager get(android::content::Context arg0);
		void getTopics(android::adservices::topics::GetTopicsRequest arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::adservices::topics

