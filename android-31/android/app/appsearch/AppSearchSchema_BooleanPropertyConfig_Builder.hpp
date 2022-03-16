#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_BooleanPropertyConfig;
}
class JString;

namespace android::app::appsearch
{
	class AppSearchSchema_BooleanPropertyConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_BooleanPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_BooleanPropertyConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppSearchSchema_BooleanPropertyConfig_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_BooleanPropertyConfig build() const;
		android::app::appsearch::AppSearchSchema_BooleanPropertyConfig_Builder setCardinality(jint arg0) const;
	};
} // namespace android::app::appsearch

