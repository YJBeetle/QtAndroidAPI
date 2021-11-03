#pragma once

#include "../../../JObject.hpp"

namespace java::time::temporal
{
	class JulianFields : public JObject
	{
	public:
		// Fields
		static JObject JULIAN_DAY();
		static JObject MODIFIED_JULIAN_DAY();
		static JObject RATA_DIE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JulianFields(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JulianFields(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::time::temporal

