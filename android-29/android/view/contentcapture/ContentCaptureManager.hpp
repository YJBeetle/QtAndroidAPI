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
	class ContentCaptureManager : public JObject
	{
	public:
		// Fields
		
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
	};
} // namespace android::view::contentcapture

