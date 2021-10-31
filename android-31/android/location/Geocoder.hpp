#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace java::util
{
	class Locale;
}

namespace android::location
{
	class Geocoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Geocoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Geocoder(QJniObject obj);
		
		// Constructors
		Geocoder(android::content::Context arg0);
		Geocoder(android::content::Context arg0, java::util::Locale arg1);
		
		// Methods
		static jboolean isPresent();
		__JniBaseClass getFromLocation(jdouble arg0, jdouble arg1, jint arg2);
		__JniBaseClass getFromLocationName(jstring arg0, jint arg1);
		__JniBaseClass getFromLocationName(jstring arg0, jint arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5);
	};
} // namespace android::location

