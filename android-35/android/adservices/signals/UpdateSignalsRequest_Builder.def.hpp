#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::signals
{
	class UpdateSignalsRequest;
}
namespace android::net
{
	class Uri;
}

namespace android::adservices::signals
{
	class UpdateSignalsRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UpdateSignalsRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UpdateSignalsRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UpdateSignalsRequest_Builder(android::net::Uri arg0);
		
		// Methods
		android::adservices::signals::UpdateSignalsRequest build() const;
		android::adservices::signals::UpdateSignalsRequest_Builder setUpdateUri(android::net::Uri arg0) const;
	};
} // namespace android::adservices::signals

