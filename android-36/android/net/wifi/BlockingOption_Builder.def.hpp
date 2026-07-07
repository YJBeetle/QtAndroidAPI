#pragma once

#include "../../../JObject.hpp"

namespace android::net::wifi
{
	class BlockingOption;
}

namespace android::net::wifi
{
	class BlockingOption_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BlockingOption_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlockingOption_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BlockingOption_Builder(jint arg0);
		
		// Methods
		android::net::wifi::BlockingOption build() const;
		android::net::wifi::BlockingOption_Builder setBlockingBssidOnly(jboolean arg0) const;
	};
} // namespace android::net::wifi

