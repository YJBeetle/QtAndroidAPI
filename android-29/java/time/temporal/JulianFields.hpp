#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::time::temporal
{
	class JulianFields : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject JULIAN_DAY();
		static QAndroidJniObject MODIFIED_JULIAN_DAY();
		static QAndroidJniObject RATA_DIE();
		
		JulianFields(QAndroidJniObject obj);
		// Constructors
		JulianFields() = default;
		
		// Methods
	};
} // namespace java::time::temporal

