#pragma once

#include "../../../../JObject.hpp"

namespace android::service::settings::preferences
{
	class MetadataRequest;
}

namespace android::service::settings::preferences
{
	class MetadataRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MetadataRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MetadataRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MetadataRequest_Builder();
		
		// Methods
		android::service::settings::preferences::MetadataRequest build() const;
	};
} // namespace android::service::settings::preferences

