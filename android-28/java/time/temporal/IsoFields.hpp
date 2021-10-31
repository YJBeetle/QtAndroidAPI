#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::time::temporal
{
	class IsoFields : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass DAY_OF_QUARTER();
		static __JniBaseClass QUARTER_OF_YEAR();
		static __JniBaseClass QUARTER_YEARS();
		static __JniBaseClass WEEK_BASED_YEAR();
		static __JniBaseClass WEEK_BASED_YEARS();
		static __JniBaseClass WEEK_OF_WEEK_BASED_YEAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IsoFields(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IsoFields(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::time::temporal

