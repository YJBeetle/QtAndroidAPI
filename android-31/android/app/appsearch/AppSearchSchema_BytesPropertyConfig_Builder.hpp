#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_BytesPropertyConfig;
}
class JString;

namespace android::app::appsearch
{
	class AppSearchSchema_BytesPropertyConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_BytesPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_BytesPropertyConfig_Builder(QJniObject obj);
		
		// Constructors
		AppSearchSchema_BytesPropertyConfig_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_BytesPropertyConfig build() const;
		android::app::appsearch::AppSearchSchema_BytesPropertyConfig_Builder setCardinality(jint arg0) const;
	};
} // namespace android::app::appsearch

