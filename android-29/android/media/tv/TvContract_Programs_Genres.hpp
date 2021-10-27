#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::tv
{
	class TvContract_Programs_Genres : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ANIMAL_WILDLIFE();
		static jstring ARTS();
		static jstring COMEDY();
		static jstring DRAMA();
		static jstring EDUCATION();
		static jstring ENTERTAINMENT();
		static jstring FAMILY_KIDS();
		static jstring GAMING();
		static jstring LIFE_STYLE();
		static jstring MOVIES();
		static jstring MUSIC();
		static jstring NEWS();
		static jstring PREMIER();
		static jstring SHOPPING();
		static jstring SPORTS();
		static jstring TECH_SCIENCE();
		static jstring TRAVEL();
		
		TvContract_Programs_Genres(QAndroidJniObject obj);
		// Constructors
		TvContract_Programs_Genres() = default;
		
		// Methods
		static jarray decode(jstring arg0);
		static jarray decode(const QString &arg0);
		static jstring encode(jarray arg0);
		static jboolean isCanonical(jstring arg0);
		static jboolean isCanonical(const QString &arg0);
	};
} // namespace android::media::tv

