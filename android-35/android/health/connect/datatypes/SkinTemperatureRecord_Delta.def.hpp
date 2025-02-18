#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes::units
{
	class TemperatureDelta;
}
class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class SkinTemperatureRecord_Delta : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SkinTemperatureRecord_Delta(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SkinTemperatureRecord_Delta(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SkinTemperatureRecord_Delta(android::health::connect::datatypes::units::TemperatureDelta arg0, java::time::Instant arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::TemperatureDelta getDelta() const;
		java::time::Instant getTime() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

