#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_EmbeddingPropertyConfig;
}
class JString;

namespace android::app::appsearch
{
	class AppSearchSchema_EmbeddingPropertyConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_EmbeddingPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_EmbeddingPropertyConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppSearchSchema_EmbeddingPropertyConfig_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_EmbeddingPropertyConfig build() const;
		android::app::appsearch::AppSearchSchema_EmbeddingPropertyConfig_Builder setCardinality(jint arg0) const;
		android::app::appsearch::AppSearchSchema_EmbeddingPropertyConfig_Builder setIndexingType(jint arg0) const;
		android::app::appsearch::AppSearchSchema_EmbeddingPropertyConfig_Builder setQuantizationType(jint arg0) const;
	};
} // namespace android::app::appsearch

