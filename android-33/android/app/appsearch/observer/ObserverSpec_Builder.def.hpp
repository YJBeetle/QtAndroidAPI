#pragma once

#include "../../../../JObject.hpp"

class JArray;
namespace android::app::appsearch::observer
{
	class ObserverSpec;
}

namespace android::app::appsearch::observer
{
	class ObserverSpec_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObserverSpec_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObserverSpec_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ObserverSpec_Builder();
		
		// Methods
		android::app::appsearch::observer::ObserverSpec_Builder addFilterSchemas(JArray arg0) const;
		android::app::appsearch::observer::ObserverSpec_Builder addFilterSchemas(JObject arg0) const;
		android::app::appsearch::observer::ObserverSpec build() const;
	};
} // namespace android::app::appsearch::observer

