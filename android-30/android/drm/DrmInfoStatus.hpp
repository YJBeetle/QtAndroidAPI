#pragma once

#include "../../JObject.hpp"

namespace android::drm
{
	class ProcessedData;
}

namespace android::drm
{
	class DrmInfoStatus : public JObject
	{
	public:
		// Fields
		static jint STATUS_ERROR();
		static jint STATUS_OK();
		android::drm::ProcessedData data();
		jint infoType();
		jstring mimeType();
		jint statusCode();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmInfoStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmInfoStatus(QAndroidJniObject obj);
		
		// Constructors
		DrmInfoStatus(jint arg0, jint arg1, android::drm::ProcessedData arg2, jstring arg3);
		
		// Methods
	};
} // namespace android::drm

