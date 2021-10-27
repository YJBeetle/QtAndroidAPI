#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::time::temporal
{
	class TemporalQueries : public __JniBaseClass
	{
	public:
		// Fields
		
		TemporalQueries(QAndroidJniObject obj);
		// Constructors
		TemporalQueries() = default;
		
		// Methods
		static QAndroidJniObject chronology();
		static QAndroidJniObject localDate();
		static QAndroidJniObject localTime();
		static QAndroidJniObject offset();
		static QAndroidJniObject precision();
		static QAndroidJniObject zone();
		static QAndroidJniObject zoneId();
	};
} // namespace java::time::temporal

