#pragma once

#include "../../JObject.hpp"

class JArray;
class JString;

namespace java::sql
{
	class DriverPropertyInfo : public JObject
	{
	public:
		// Fields
		JArray choices();
		JString description();
		JString name();
		jboolean required();
		JString value();
		
		// QJniObject forward
		template<typename ...Ts> explicit DriverPropertyInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DriverPropertyInfo(QJniObject obj);
		
		// Constructors
		DriverPropertyInfo(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace java::sql

