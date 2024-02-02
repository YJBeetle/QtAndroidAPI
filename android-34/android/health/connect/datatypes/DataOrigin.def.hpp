#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;

namespace android::health::connect::datatypes
{
	class DataOrigin : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DataOrigin(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataOrigin(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getPackageName() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

