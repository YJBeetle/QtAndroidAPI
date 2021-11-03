#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_DocumentPropertyConfig;
}
class JString;

namespace android::app::appsearch
{
	class AppSearchSchema_DocumentPropertyConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_DocumentPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_DocumentPropertyConfig_Builder(QJniObject obj);
		
		// Constructors
		AppSearchSchema_DocumentPropertyConfig_Builder(JString arg0, JString arg1);
		
		// Methods
		android::app::appsearch::AppSearchSchema_DocumentPropertyConfig build() const;
		android::app::appsearch::AppSearchSchema_DocumentPropertyConfig_Builder setCardinality(jint arg0) const;
		android::app::appsearch::AppSearchSchema_DocumentPropertyConfig_Builder setShouldIndexNestedProperties(jboolean arg0) const;
	};
} // namespace android::app::appsearch

