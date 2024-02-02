#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Device;
}
class JString;

namespace android::health::connect::datatypes
{
	class Device_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Device_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Device_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Device_Builder();
		
		// Methods
		android::health::connect::datatypes::Device build() const;
		android::health::connect::datatypes::Device_Builder setManufacturer(JString arg0) const;
		android::health::connect::datatypes::Device_Builder setModel(JString arg0) const;
		android::health::connect::datatypes::Device_Builder setType(jint arg0) const;
	};
} // namespace android::health::connect::datatypes

