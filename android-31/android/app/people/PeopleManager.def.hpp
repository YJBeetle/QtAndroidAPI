#pragma once

#include "../../../JObject.hpp"

namespace android::app::people
{
	class ConversationStatus;
}
class JString;

namespace android::app::people
{
	class PeopleManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PeopleManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PeopleManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addOrUpdateStatus(JString arg0, android::app::people::ConversationStatus arg1) const;
		void clearStatus(JString arg0, JString arg1) const;
		void clearStatuses(JString arg0) const;
		JObject getStatuses(JString arg0) const;
	};
} // namespace android::app::people

