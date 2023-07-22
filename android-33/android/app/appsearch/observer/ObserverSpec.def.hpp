#pragma once

#include "../../../../JObject.hpp"

namespace android::app::appsearch::observer
{
	class ObserverSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObserverSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObserverSpec(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getFilterSchemas() const;
	};
} // namespace android::app::appsearch::observer

