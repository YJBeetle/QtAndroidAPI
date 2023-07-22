#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema;
}
namespace android::app::appsearch
{
	class GetSchemaResponse;
}

namespace android::app::appsearch
{
	class GetSchemaResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetSchemaResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetSchemaResponse_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetSchemaResponse_Builder();
		
		// Methods
		android::app::appsearch::GetSchemaResponse_Builder addSchema(android::app::appsearch::AppSearchSchema arg0) const;
		android::app::appsearch::GetSchemaResponse build() const;
		android::app::appsearch::GetSchemaResponse_Builder setVersion(jint arg0) const;
	};
} // namespace android::app::appsearch

