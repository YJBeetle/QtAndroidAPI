#pragma once

#include "./DrmEvent.hpp"

class JString;
namespace java::util
{
	class HashMap;
}

namespace android::drm
{
	class DrmErrorEvent : public android::drm::DrmEvent
	{
	public:
		// Fields
		static jint TYPE_ACQUIRE_DRM_INFO_FAILED();
		static jint TYPE_NOT_SUPPORTED();
		static jint TYPE_NO_INTERNET_CONNECTION();
		static jint TYPE_OUT_OF_MEMORY();
		static jint TYPE_PROCESS_DRM_INFO_FAILED();
		static jint TYPE_REMOVE_ALL_RIGHTS_FAILED();
		static jint TYPE_RIGHTS_NOT_INSTALLED();
		static jint TYPE_RIGHTS_RENEWAL_NOT_ALLOWED();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmErrorEvent(const char *className, const char *sig, Ts...agv) : android::drm::DrmEvent(className, sig, std::forward<Ts>(agv)...) {}
		DrmErrorEvent(QJniObject obj);
		
		// Constructors
		DrmErrorEvent(jint arg0, jint arg1, JString arg2);
		DrmErrorEvent(jint arg0, jint arg1, JString arg2, java::util::HashMap arg3);
		
		// Methods
	};
} // namespace android::drm

