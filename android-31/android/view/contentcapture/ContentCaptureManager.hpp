#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::view::contentcapture
{
	class DataRemovalRequest;
}
namespace android::view::contentcapture
{
	class DataShareRequest;
}

namespace android::view::contentcapture
{
	class ContentCaptureManager : public JObject
	{
	public:
		// Fields
		static jint DATA_SHARE_ERROR_CONCURRENT_REQUEST();
		static jint DATA_SHARE_ERROR_TIMEOUT_INTERRUPTED();
		static jint DATA_SHARE_ERROR_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentCaptureManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getContentCaptureConditions() const;
		android::content::ComponentName getServiceComponentName() const;
		jboolean isContentCaptureEnabled() const;
		void removeData(android::view::contentcapture::DataRemovalRequest arg0) const;
		void setContentCaptureEnabled(jboolean arg0) const;
		void shareData(android::view::contentcapture::DataShareRequest arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::view::contentcapture

