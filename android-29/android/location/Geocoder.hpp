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
		
		Geocoder(QAndroidJniObject obj);
		// Constructors
		Geocoder(android::content::Context arg0);
		Geocoder(android::content::Context arg0, java::util::Locale arg1);
		Geocoder() = default;
		
		// Methods
		static jboolean isPresent();
		QAndroidJniObject getFromLocation(jdouble arg0, jdouble arg1, jint arg2);
		QAndroidJniObject getFromLocationName(jstring arg0, jint arg1);
		QAndroidJniObject getFromLocationName(jstring arg0, jint arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5);
	};
} // namespace android::location

