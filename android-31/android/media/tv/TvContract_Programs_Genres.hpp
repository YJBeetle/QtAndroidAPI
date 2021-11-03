#pragma once

#include "../../../JObject.hpp"


namespace android::media::tv
{
	class TvContract_Programs_Genres : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit TvContract_Programs_Genres(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvContract_Programs_Genres(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jarray decode(jstring arg0);
		static jstring encode(jarray arg0);
		static jboolean isCanonical(jstring arg0);
	};
} // namespace android::media::tv

