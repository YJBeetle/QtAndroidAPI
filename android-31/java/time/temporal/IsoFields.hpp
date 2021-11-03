#pragma once

#include "../../../JObject.hpp"


namespace java::time::temporal
{
	class IsoFields : public JObject
	{
	public:
		// Fields
		static JObject DAY_OF_QUARTER();
		static JObject QUARTER_OF_YEAR();
		static JObject QUARTER_YEARS();
		static JObject WEEK_BASED_YEAR();
		static JObject WEEK_BASED_YEARS();
		static JObject WEEK_OF_WEEK_BASED_YEAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IsoFields(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IsoFields(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::time::temporal

