#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdData;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::adservices::common
{
	class AdData_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdData_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdData_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdData_Builder();
		
		// Methods
		android::adservices::common::AdData build() const;
		android::adservices::common::AdData_Builder setMetadata(JString arg0) const;
		android::adservices::common::AdData_Builder setRenderUri(android::net::Uri arg0) const;
	};
} // namespace android::adservices::common

