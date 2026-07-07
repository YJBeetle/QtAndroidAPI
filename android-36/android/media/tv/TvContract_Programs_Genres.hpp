#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TvContract_Programs_Genres.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JString TvContract_Programs_Genres::ANIMAL_WILDLIFE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"ANIMAL_WILDLIFE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::ARTS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"ARTS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::COMEDY()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"COMEDY",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::DRAMA()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"DRAMA",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::EDUCATION()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"EDUCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::ENTERTAINMENT()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"ENTERTAINMENT",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::FAMILY_KIDS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"FAMILY_KIDS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::GAMING()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"GAMING",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::LIFE_STYLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"LIFE_STYLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::MOVIES()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"MOVIES",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::MUSIC()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"MUSIC",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::NEWS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"NEWS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::PREMIER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"PREMIER",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::SHOPPING()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"SHOPPING",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::SPORTS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"SPORTS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::TECH_SCIENCE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"TECH_SCIENCE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_Programs_Genres::TRAVEL()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Programs$Genres",
			"TRAVEL",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray TvContract_Programs_Genres::decode(JString arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract$Programs$Genres",
			"decode",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString TvContract_Programs_Genres::encode(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract$Programs$Genres",
			"encode",
			"([Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jarray>()
		);
	}
	inline jboolean TvContract_Programs_Genres::isCanonical(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.tv.TvContract$Programs$Genres",
			"isCanonical",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
