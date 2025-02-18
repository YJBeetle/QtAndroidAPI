#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JObject;
class JString;

namespace android::adservices::signals
{
	class UpdateSignalsRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UpdateSignalsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UpdateSignalsRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::net::Uri getUpdateUri() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::adservices::signals

