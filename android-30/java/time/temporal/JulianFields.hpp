#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::time::temporal
{
	class JulianFields : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass JULIAN_DAY();
		static __JniBaseClass MODIFIED_JULIAN_DAY();
		static __JniBaseClass RATA_DIE();
		
		// QJniObject forward
		template<typename ...Ts> explicit JulianFields(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JulianFields(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::time::temporal

