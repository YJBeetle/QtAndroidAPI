#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class DataOrigin;
}
namespace android::health::connect::datatypes
{
	class Device;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
class JString;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class Metadata_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Metadata_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Metadata_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Metadata_Builder();
		
		// Methods
		android::health::connect::datatypes::Metadata build() const;
		android::health::connect::datatypes::Metadata_Builder setClientRecordId(JString arg0) const;
		android::health::connect::datatypes::Metadata_Builder setClientRecordVersion(jlong arg0) const;
		android::health::connect::datatypes::Metadata_Builder setDataOrigin(android::health::connect::datatypes::DataOrigin arg0) const;
		android::health::connect::datatypes::Metadata_Builder setDevice(android::health::connect::datatypes::Device arg0) const;
		android::health::connect::datatypes::Metadata_Builder setId(JString arg0) const;
		android::health::connect::datatypes::Metadata_Builder setLastModifiedTime(java::time::Instant arg0) const;
		android::health::connect::datatypes::Metadata_Builder setRecordingMethod(jint arg0) const;
	};
} // namespace android::health::connect::datatypes

