#pragma once

#include "../../__JniBaseClass.hpp"
#include "./DrmEvent.hpp"

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
		
		DrmInfoEvent(QAndroidJniObject obj);
		// Constructors
		DrmInfoEvent(jint &arg0, jint &arg1, jstring &arg2);
		DrmInfoEvent(jint &arg0, jint &arg1, const QString &arg2);
		DrmInfoEvent(jint &arg0, jint &arg1, jstring &arg2, java::util::HashMap &arg3);
		DrmInfoEvent(jint &arg0, jint &arg1, const QString &arg2, java::util::HashMap &arg3);
		DrmInfoEvent() = default;
		
		// Methods
	};
} // namespace android::drm

