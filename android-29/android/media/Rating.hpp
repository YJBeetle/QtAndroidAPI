#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class Rating : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint RATING_3_STARS();
		static jint RATING_4_STARS();
		static jint RATING_5_STARS();
		static jint RATING_HEART();
		static jint RATING_NONE();
		static jint RATING_PERCENTAGE();
		static jint RATING_THUMB_UP_DOWN();
		
		Rating(QAndroidJniObject obj);
		// Constructors
		Rating() = default;
		
		// Methods
		static QAndroidJniObject newHeartRating(jboolean arg0);
		static QAndroidJniObject newPercentageRating(jfloat arg0);
		static QAndroidJniObject newStarRating(jint arg0, jfloat arg1);
		static QAndroidJniObject newThumbRating(jboolean arg0);
		static QAndroidJniObject newUnratedRating(jint arg0);
		jint describeContents();
		jfloat getPercentRating();
		jint getRatingStyle();
		jfloat getStarRating();
		jboolean hasHeart();
		jboolean isRated();
		jboolean isThumbUp();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

