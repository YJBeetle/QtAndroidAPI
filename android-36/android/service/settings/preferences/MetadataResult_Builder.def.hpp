#pragma once

#include "../../../../JObject.hpp"

namespace android::service::settings::preferences
{
	class MetadataResult;
}

namespace android::service::settings::preferences
{
	class MetadataResult_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MetadataResult_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MetadataResult_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MetadataResult_Builder(jint arg0);
		
		// Methods
		android::service::settings::preferences::MetadataResult build() const;
		android::service::settings::preferences::MetadataResult_Builder setMetadataList(JObject arg0) const;
	};
} // namespace android::service::settings::preferences

