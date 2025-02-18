#pragma once

#include "../../../../../JObject.hpp"

class JObject;
class JString;

namespace android::health::connect::datatypes::units
{
	class Pressure : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Pressure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Pressure(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::health::connect::datatypes::units::Pressure fromMillimetersOfMercury(jdouble arg0);
		jint compareTo(android::health::connect::datatypes::units::Pressure arg0) const;
		jint compareTo(JObject arg0) const;
		jboolean equals(JObject arg0) const;
		jdouble getInMillimetersOfMercury() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::health::connect::datatypes::units

