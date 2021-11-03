#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;

namespace android::media::tv
{
	class TvContract_Programs_Genres : public JObject
	{
	public:
		// Fields
		static JString ANIMAL_WILDLIFE();
		static JString ARTS();
		static JString COMEDY();
		static JString DRAMA();
		static JString EDUCATION();
		static JString ENTERTAINMENT();
		static JString FAMILY_KIDS();
		static JString GAMING();
		static JString LIFE_STYLE();
		static JString MOVIES();
		static JString MUSIC();
		static JString NEWS();
		static JString PREMIER();
		static JString SHOPPING();
		static JString SPORTS();
		static JString TECH_SCIENCE();
		static JString TRAVEL();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvContract_Programs_Genres(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvContract_Programs_Genres(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JArray decode(JString arg0);
		static JString encode(JArray arg0);
		static jboolean isCanonical(JString arg0);
	};
} // namespace android::media::tv

