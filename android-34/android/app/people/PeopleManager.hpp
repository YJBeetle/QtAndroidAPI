#pragma once

#include "./ConversationStatus.def.hpp"
#include "../../../JString.hpp"
#include "./PeopleManager.def.hpp"

namespace android::app::people
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PeopleManager::addOrUpdateStatus(JString arg0, android::app::people::ConversationStatus arg1) const
	{
		callMethod<void>(
			"addOrUpdateStatus",
			"(Ljava/lang/String;Landroid/app/people/ConversationStatus;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void PeopleManager::clearStatus(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"clearStatus",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void PeopleManager::clearStatuses(JString arg0) const
	{
		callMethod<void>(
			"clearStatuses",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JObject PeopleManager::getStatuses(JString arg0) const
	{
		return callObjectMethod(
			"getStatuses",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app::people

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::people;
#endif
