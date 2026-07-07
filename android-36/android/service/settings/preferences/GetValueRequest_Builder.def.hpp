#pragma once

#include "../../../../JObject.hpp"

namespace android::service::settings::preferences
{
	class GetValueRequest;
}
class JString;

namespace android::service::settings::preferences
{
	class GetValueRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetValueRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetValueRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetValueRequest_Builder(JString arg0, JString arg1);
		
		// Methods
		android::service::settings::preferences::GetValueRequest build() const;
	};
} // namespace android::service::settings::preferences

