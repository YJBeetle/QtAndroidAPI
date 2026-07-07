#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class RenderOutput;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;

namespace android::adservices::ondevicepersonalization
{
	class RenderOutput_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderOutput_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderOutput_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RenderOutput_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::RenderOutput build() const;
		android::adservices::ondevicepersonalization::RenderOutput_Builder setContent(JString arg0) const;
		android::adservices::ondevicepersonalization::RenderOutput_Builder setTemplateId(JString arg0) const;
		android::adservices::ondevicepersonalization::RenderOutput_Builder setTemplateParams(android::os::PersistableBundle arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

