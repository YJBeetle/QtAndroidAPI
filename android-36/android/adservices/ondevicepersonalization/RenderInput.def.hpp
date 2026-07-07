#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class RenderingConfig;
}
class JObject;

namespace android::adservices::ondevicepersonalization
{
	class RenderInput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderInput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RenderInput(jint arg0, jint arg1, android::adservices::ondevicepersonalization::RenderingConfig arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getHeight() const;
		android::adservices::ondevicepersonalization::RenderingConfig getRenderingConfig() const;
		jint getWidth() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

