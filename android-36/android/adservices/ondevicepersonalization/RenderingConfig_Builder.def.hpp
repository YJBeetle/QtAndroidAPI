#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class RenderingConfig;
}
class JString;

namespace android::adservices::ondevicepersonalization
{
	class RenderingConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderingConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderingConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RenderingConfig_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::RenderingConfig_Builder addKey(JString arg0) const;
		android::adservices::ondevicepersonalization::RenderingConfig build() const;
		android::adservices::ondevicepersonalization::RenderingConfig_Builder setKeys(JObject arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

