#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_LongPropertyConfig;
}
class JString;

namespace android::app::appsearch
{
	class AppSearchSchema_LongPropertyConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_LongPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_LongPropertyConfig_Builder(QJniObject obj);
		
		// Constructors
		AppSearchSchema_LongPropertyConfig_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_LongPropertyConfig build();
		android::app::appsearch::AppSearchSchema_LongPropertyConfig_Builder setCardinality(jint arg0);
	};
} // namespace android::app::appsearch

