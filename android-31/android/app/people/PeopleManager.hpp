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
		PeopleManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addOrUpdateStatus(JString arg0, android::app::people::ConversationStatus arg1);
		void clearStatus(JString arg0, JString arg1);
		void clearStatuses(JString arg0);
		JObject getStatuses(JString arg0);
	};
} // namespace android::app::people

