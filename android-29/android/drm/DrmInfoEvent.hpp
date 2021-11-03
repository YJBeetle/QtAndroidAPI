#pragma once

#include "./DrmEvent.hpp"

class JString;
namespace java::util
{
	class HashMap;
}

namespace android::drm
{
	class DrmInfoEvent : public android::drm::DrmEvent
	{
	public:
		// Fields
		static jint TYPE_ACCOUNT_ALREADY_REGISTERED();
		static jint TYPE_ALREADY_REGISTERED_BY_ANOTHER_ACCOUNT();
		static jint TYPE_REMOVE_RIGHTS();
		static jint TYPE_RIGHTS_INSTALLED();
		static jint TYPE_RIGHTS_REMOVED();
		static jint TYPE_WAIT_FOR_RIGHTS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmInfoEvent(const char *className, const char *sig, Ts...agv) : android::drm::DrmEvent(className, sig, std::forward<Ts>(agv)...) {}
		DrmInfoEvent(QAndroidJniObject obj);
		
		// Constructors
		DrmInfoEvent(jint arg0, jint arg1, JString arg2);
		DrmInfoEvent(jint arg0, jint arg1, JString arg2, java::util::HashMap arg3);
		
		// Methods
	};
} // namespace android::drm

