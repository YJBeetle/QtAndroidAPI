#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
class JString;
namespace java::util
{
	class Locale;
}

namespace android::location
{
	class Geocoder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Geocoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Geocoder(QAndroidJniObject obj);
		
		// Constructors
		Geocoder(android::content::Context arg0);
		Geocoder(android::content::Context arg0, java::util::Locale arg1);
		
		// Methods
		static jboolean isPresent();
		JObject getFromLocation(jdouble arg0, jdouble arg1, jint arg2);
		JObject getFromLocationName(JString arg0, jint arg1);
		JObject getFromLocationName(JString arg0, jint arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5);
	};
} // namespace android::location

