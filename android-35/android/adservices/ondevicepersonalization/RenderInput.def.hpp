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
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getHeight() const;
		android::adservices::ondevicepersonalization::RenderingConfig getRenderingConfig() const;
		jint getWidth() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

