#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::webkit
{
	class TracingConfig;
}

namespace android::webkit
{
	class TracingConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TracingConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TracingConfig_Builder(QJniObject obj);
		
		// Constructors
		TracingConfig_Builder();
		
		// Methods
		android::webkit::TracingConfig_Builder addCategories(JIntArray arg0) const;
		android::webkit::TracingConfig_Builder addCategories(JArray arg0) const;
		android::webkit::TracingConfig_Builder addCategories(JObject arg0) const;
		android::webkit::TracingConfig build() const;
		android::webkit::TracingConfig_Builder setTracingMode(jint arg0) const;
	};
} // namespace android::webkit

