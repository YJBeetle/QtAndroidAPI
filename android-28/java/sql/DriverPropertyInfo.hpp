#pragma once

#include "../../JObject.hpp"


namespace java::sql
{
	class DriverPropertyInfo : public JObject
	{
	public:
		// Fields
		jarray choices();
		jstring description();
		jstring name();
		jboolean required();
		jstring value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DriverPropertyInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DriverPropertyInfo(QAndroidJniObject obj);
		
		// Constructors
		DriverPropertyInfo(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace java::sql

