#include "./ConversationStatus.hpp"
#include "./PeopleManager.hpp"

namespace android::app::people
{
	// Fields
	
	// QAndroidJniObject forward
	PeopleManager::PeopleManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void PeopleManager::addOrUpdateStatus(jstring arg0, android::app::people::ConversationStatus arg1)
	{
		callMethod<void>(
			"addOrUpdateStatus",
			"(Ljava/lang/String;Landroid/app/people/ConversationStatus;)V",
			arg0,
			arg1.object()
		);
	}
	void PeopleManager::clearStatus(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"clearStatus",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PeopleManager::clearStatuses(jstring arg0)
	{
		callMethod<void>(
			"clearStatuses",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	__JniBaseClass PeopleManager::getStatuses(jstring arg0)
	{
		return callObjectMethod(
			"getStatuses",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
} // namespace android::app::people

