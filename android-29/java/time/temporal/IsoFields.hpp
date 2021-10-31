#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::time::temporal
{
	class IsoFields : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DAY_OF_QUARTER();
		static QAndroidJniObject QUARTER_OF_YEAR();
		static QAndroidJniObject QUARTER_YEARS();
		static QAndroidJniObject WEEK_BASED_YEAR();
		static QAndroidJniObject WEEK_BASED_YEARS();
		static QAndroidJniObject WEEK_OF_WEEK_BASED_YEAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IsoFields(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IsoFields(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::time::temporal

