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
		
		IsoFields(QAndroidJniObject obj);
		// Constructors
		IsoFields() = default;
		
		// Methods
	};
} // namespace java::time::temporal

