#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class PersistableBundle;
}
class JObject;
class JString;

namespace android::adservices::ondevicepersonalization
{
	class RenderOutput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderOutput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getContent() const;
		JString getTemplateId() const;
		android::os::PersistableBundle getTemplateParams() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

