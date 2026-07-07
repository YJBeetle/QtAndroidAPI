#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class FhirResource;
}
class JString;

namespace android::health::connect::datatypes
{
	class FhirResource_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FhirResource_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FhirResource_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FhirResource_Builder(android::health::connect::datatypes::FhirResource arg0);
		FhirResource_Builder(android::health::connect::datatypes::FhirResource_Builder &arg0);
		FhirResource_Builder(jint arg0, JString arg1, JString arg2);
		
		// Methods
		android::health::connect::datatypes::FhirResource build() const;
		android::health::connect::datatypes::FhirResource_Builder setData(JString arg0) const;
		android::health::connect::datatypes::FhirResource_Builder setId(JString arg0) const;
		android::health::connect::datatypes::FhirResource_Builder setType(jint arg0) const;
	};
} // namespace android::health::connect::datatypes

