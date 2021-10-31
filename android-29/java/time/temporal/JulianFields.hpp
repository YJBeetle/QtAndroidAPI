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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JulianFields(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JulianFields(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::time::temporal

