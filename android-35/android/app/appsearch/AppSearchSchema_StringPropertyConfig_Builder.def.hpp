#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_StringPropertyConfig;
}
class JString;

namespace android::app::appsearch
{
	class AppSearchSchema_StringPropertyConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_StringPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_StringPropertyConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppSearchSchema_StringPropertyConfig_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_StringPropertyConfig build() const;
		android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder setCardinality(jint arg0) const;
		android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder setIndexingType(jint arg0) const;
		android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder setJoinableValueType(jint arg0) const;
		android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder setTokenizerType(jint arg0) const;
	};
} // namespace android::app::appsearch

