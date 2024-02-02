#pragma once

#include "../../../../../JObject.hpp"

class JObject;
class JString;

namespace android::health::connect::datatypes::units
{
	class Volume : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Volume(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Volume(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::health::connect::datatypes::units::Volume fromLiters(jdouble arg0);
		jint compareTo(android::health::connect::datatypes::units::Volume arg0) const;
		jint compareTo(JObject arg0) const;
		jboolean equals(JObject arg0) const;
		jdouble getInLiters() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::health::connect::datatypes::units

