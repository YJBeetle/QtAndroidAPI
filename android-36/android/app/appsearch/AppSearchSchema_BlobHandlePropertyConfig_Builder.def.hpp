#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_BlobHandlePropertyConfig;
}
class JString;

namespace android::app::appsearch
{
	class AppSearchSchema_BlobHandlePropertyConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_BlobHandlePropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_BlobHandlePropertyConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppSearchSchema_BlobHandlePropertyConfig_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_BlobHandlePropertyConfig build() const;
		android::app::appsearch::AppSearchSchema_BlobHandlePropertyConfig_Builder setCardinality(jint arg0) const;
	};
} // namespace android::app::appsearch

