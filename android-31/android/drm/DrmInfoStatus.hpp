#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::drm
{
	class ProcessedData;
}

namespace android::drm
{
	class DrmInfoStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_ERROR();
		static jint STATUS_OK();
		android::drm::ProcessedData data();
		jint infoType();
		jstring mimeType();
		jint statusCode();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmInfoStatus(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmInfoStatus(QJniObject obj);
		
		// Constructors
		DrmInfoStatus(jint arg0, jint arg1, android::drm::ProcessedData arg2, jstring arg3);
		
		// Methods
	};
} // namespace android::drm

