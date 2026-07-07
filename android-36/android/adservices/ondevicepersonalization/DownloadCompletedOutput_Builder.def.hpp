#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class DownloadCompletedOutput;
}
class JString;

namespace android::adservices::ondevicepersonalization
{
	class DownloadCompletedOutput_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DownloadCompletedOutput_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadCompletedOutput_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DownloadCompletedOutput_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::DownloadCompletedOutput_Builder addRetainedKey(JString arg0) const;
		android::adservices::ondevicepersonalization::DownloadCompletedOutput build() const;
		android::adservices::ondevicepersonalization::DownloadCompletedOutput_Builder setRetainedKeys(JObject arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

