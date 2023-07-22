#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema;
}
namespace android::app::appsearch
{
	class AppSearchSchema_PropertyConfig;
}
class JString;

namespace android::app::appsearch
{
	class AppSearchSchema_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppSearchSchema_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_Builder addProperty(android::app::appsearch::AppSearchSchema_PropertyConfig arg0) const;
		android::app::appsearch::AppSearchSchema build() const;
	};
} // namespace android::app::appsearch

