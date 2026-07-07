#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SchemaVisibilityConfig;
}
namespace android::app::appsearch
{
	class SetBlobVisibilityRequest;
}
class JString;

namespace android::app::appsearch
{
	class SetBlobVisibilityRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SetBlobVisibilityRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetBlobVisibilityRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SetBlobVisibilityRequest_Builder();
		
		// Methods
		android::app::appsearch::SetBlobVisibilityRequest_Builder addNamespaceVisibleToConfig(JString arg0, android::app::appsearch::SchemaVisibilityConfig arg1) const;
		android::app::appsearch::SetBlobVisibilityRequest build() const;
		android::app::appsearch::SetBlobVisibilityRequest_Builder clearNamespaceVisibleToConfigs(JString arg0) const;
		android::app::appsearch::SetBlobVisibilityRequest_Builder setNamespaceDisplayedBySystem(JString arg0, jboolean arg1) const;
	};
} // namespace android::app::appsearch

