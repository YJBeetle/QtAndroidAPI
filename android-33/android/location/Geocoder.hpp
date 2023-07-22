#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./Geocoder.def.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	inline Geocoder::Geocoder(android::content::Context arg0)
		: JObject(
			"android.location.Geocoder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Geocoder::Geocoder(android::content::Context arg0, java::util::Locale arg1)
		: JObject(
			"android.location.Geocoder",
			"(Landroid/content/Context;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean Geocoder::isPresent()
	{
		return callStaticMethod<jboolean>(
			"android.location.Geocoder",
			"isPresent",
			"()Z"
		);
	}
	inline JObject Geocoder::getFromLocation(jdouble arg0, jdouble arg1, jint arg2) const
	{
		return callObjectMethod(
			"getFromLocation",
			"(DDI)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Geocoder::getFromLocation(jdouble arg0, jdouble arg1, jint arg2, JObject arg3) const
	{
		callMethod<void>(
			"getFromLocation",
			"(DDILandroid/location/Geocoder$GeocodeListener;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline JObject Geocoder::getFromLocationName(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getFromLocationName",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JObject Geocoder::getFromLocationName(JString arg0, jint arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5) const
	{
		return callObjectMethod(
			"getFromLocationName",
			"(Ljava/lang/String;IDDDD)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void Geocoder::getFromLocationName(JString arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"getFromLocationName",
			"(Ljava/lang/String;ILandroid/location/Geocoder$GeocodeListener;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline void Geocoder::getFromLocationName(JString arg0, jint arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5, JObject arg6) const
	{
		callMethod<void>(
			"getFromLocationName",
			"(Ljava/lang/String;IDDDDLandroid/location/Geocoder$GeocodeListener;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
