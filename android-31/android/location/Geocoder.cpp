#include "../content/Context.hpp"
#include "../../java/util/Locale.hpp"
#include "./Geocoder.hpp"

namespace android::location
{
	// Fields
	
	// QJniObject forward
	Geocoder::Geocoder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Geocoder::Geocoder(android::content::Context arg0)
		: JObject(
			"android.location.Geocoder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Geocoder::Geocoder(android::content::Context arg0, java::util::Locale arg1)
		: JObject(
			"android.location.Geocoder",
			"(Landroid/content/Context;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jboolean Geocoder::isPresent()
	{
		return callStaticMethod<jboolean>(
			"android.location.Geocoder",
			"isPresent",
			"()Z"
		);
	}
	JObject Geocoder::getFromLocation(jdouble arg0, jdouble arg1, jint arg2)
	{
		return callObjectMethod(
			"getFromLocation",
			"(DDI)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	JObject Geocoder::getFromLocationName(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getFromLocationName",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	JObject Geocoder::getFromLocationName(jstring arg0, jint arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5)
	{
		return callObjectMethod(
			"getFromLocationName",
			"(Ljava/lang/String;IDDDD)Ljava/util/List;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
} // namespace android::location

