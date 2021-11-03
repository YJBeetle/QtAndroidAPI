#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media
{
	class Rating : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint RATING_3_STARS();
		static jint RATING_4_STARS();
		static jint RATING_5_STARS();
		static jint RATING_HEART();
		static jint RATING_NONE();
		static jint RATING_PERCENTAGE();
		static jint RATING_THUMB_UP_DOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Rating(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Rating(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::Rating newHeartRating(jboolean arg0);
		static android::media::Rating newPercentageRating(jfloat arg0);
		static android::media::Rating newStarRating(jint arg0, jfloat arg1);
		static android::media::Rating newThumbRating(jboolean arg0);
		static android::media::Rating newUnratedRating(jint arg0);
		jint describeContents();
		jfloat getPercentRating();
		jint getRatingStyle();
		jfloat getStarRating();
		jboolean hasHeart();
		jboolean isRated();
		jboolean isThumbUp();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

