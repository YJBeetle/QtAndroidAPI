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
class JObject;
class JString;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class Metadata : public JObject
	{
	public:
		// Fields
		static jint RECORDING_METHOD_ACTIVELY_RECORDED();
		static jint RECORDING_METHOD_AUTOMATICALLY_RECORDED();
		static jint RECORDING_METHOD_MANUAL_ENTRY();
		static jint RECORDING_METHOD_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit Metadata(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Metadata(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getClientRecordId() const;
		jlong getClientRecordVersion() const;
		android::health::connect::datatypes::DataOrigin getDataOrigin() const;
		android::health::connect::datatypes::Device getDevice() const;
		JString getId() const;
		java::time::Instant getLastModifiedTime() const;
		jint getRecordingMethod() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

