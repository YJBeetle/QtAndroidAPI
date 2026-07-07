#pragma once

#include "../../../JObject.hpp"

namespace android::net::wifi
{
	class SoftApConfiguration;
}
namespace android::util
{
	class SparseIntArray;
}

namespace android::net::wifi
{
	class SoftApConfiguration_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SoftApConfiguration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SoftApConfiguration_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SoftApConfiguration_Builder();
		
		// Methods
		android::net::wifi::SoftApConfiguration build() const;
		android::net::wifi::SoftApConfiguration_Builder setChannels(android::util::SparseIntArray arg0) const;
	};
} // namespace android::net::wifi

