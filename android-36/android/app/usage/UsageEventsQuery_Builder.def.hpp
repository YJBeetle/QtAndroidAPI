#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::app::usage
{
	class UsageEventsQuery;
}

namespace android::app::usage
{
	class UsageEventsQuery_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UsageEventsQuery_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsageEventsQuery_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UsageEventsQuery_Builder(jlong arg0, jlong arg1);
		
		// Methods
		android::app::usage::UsageEventsQuery build() const;
		android::app::usage::UsageEventsQuery_Builder setEventTypes(JIntArray arg0) const;
		android::app::usage::UsageEventsQuery_Builder setPackageNames(JArray arg0) const;
	};
} // namespace android::app::usage

