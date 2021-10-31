#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::people
{
	class ConversationStatus;
}

namespace android::app::people
{
	class PeopleManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PeopleManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PeopleManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addOrUpdateStatus(jstring arg0, android::app::people::ConversationStatus arg1);
		void clearStatus(jstring arg0, jstring arg1);
		void clearStatuses(jstring arg0);
		__JniBaseClass getStatuses(jstring arg0);
	};
} // namespace android::app::people

